package main

import (
	me_piotr_wera "github.com/Pwera/Protocol-Buffers-Notes/pb"
	"github.com/golang/protobuf/jsonpb"
	"github.com/golang/protobuf/proto"
	"io/ioutil"
	"log"
)

func main() {
	message := makeMessage()

	writeToFile("myfile.bin", message)
	printProtoMessage(*message)

	con := me_piotr_wera.ContextEnum_UNDEFINEX
	log.Println("Context:", con)

	message2 := &me_piotr_wera.MyMessage{}
	readFromFile("myfile.bin", message2)
	printProtoMessage(*message2)

	json := toJSon(message)
	message3 := &me_piotr_wera.MyMessage{}
	log.Println("JSON -> ", json)
	fromJSON(json, message3)

	log.Println(makeMessageWrapper())

}

func makeMessage() *me_piotr_wera.MyMessage {
	message := me_piotr_wera.MyMessage{
		Name:    "GoLang::MyMessage",
		Numbers: []int32{1, 2, 3},
		Context: me_piotr_wera.ContextEnum_GOOD,
	}
	log.Println("MyMessage:", message)
	return &message
}

func makeMessageWrapper() me_piotr_wera.MyMessageWrapper {
	return me_piotr_wera.MyMessageWrapper{
		Messages: []*me_piotr_wera.MyMessage{
			{
				Name:    "GoLang::MyMessage2",
				Numbers: []int32{1, 1, 1, 1},
				Context: me_piotr_wera.ContextEnum_BAD,
			},
			{
				Name:    "GoLang::MyMessage3",
				Numbers: []int32{4444},
				Context: me_piotr_wera.ContextEnum_UNDEFINEX,
			},
		},
	}
}

func writeToFile(fname string, pb proto.Message) error {
	out, err := proto.Marshal(pb)
	if err != nil {
		log.Fatalln("Can't serialize to bytes", err)
		return err
	}
	if err := ioutil.WriteFile(fname, out, 0644); err != nil {
		return err
	}
	log.Println("Data has been written")
	return nil
}

func readFromFile(fname string, pb proto.Message) error {
	in, err := ioutil.ReadFile(fname)
	if err != nil {
		log.Fatalf("Something went wrong when reading the file ", err)
		return err
	}
	err = proto.Unmarshal(in, pb)
	if err != nil {
		log.Fatalf("Couldn't put the bytes into the protocol buffers struct ", err)
		return err
	}
	return nil
}
func printProtoMessage(mesage me_piotr_wera.MyMessage) {
	log.Println("MyMessage:", mesage)
	log.Println("MyMessage:", mesage.Name, mesage.Numbers)
}

func toJSon(pb proto.Message) string {
	marshaler := jsonpb.Marshaler{}
	out, err := marshaler.MarshalToString(pb)
	if err != nil {
		log.Fatalf("Can't convert to JSON ", err)
		return ""
	}
	return out
}

func fromJSON(in string, pb proto.Message) {
	err := jsonpb.UnmarshalString(in, pb)
	if err != nil {
		log.Fatalf("Couldn't unmarshal the JSON into PB struct ", err)
	}
}
