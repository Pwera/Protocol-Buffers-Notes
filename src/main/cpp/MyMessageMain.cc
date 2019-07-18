#include <fstream>
#include <google/protobuf/util/time_util.h>
#include <iostream>
#include <string>
#include <random>

#include "MyMessage.pb.h"
#include "ContextEnum.pb.h"

using std::endl;
using std::cerr;
using std::cout;
using std::fstream;
using std::ios;

using google::protobuf::util::TimeUtil;

void read(const std::string &file);

void write(const std::string &file);

int main(int argc, char *argv[]) {
    GOOGLE_PROTOBUF_VERIFY_VERSION;

    if (argc != 2) {
        cerr << "File:  " << argv[0] << endl;
        return -1;
    }

    read(argv[1]);
    write(argv[1]);

    google::protobuf::ShutdownProtobufLibrary();

    return 0;
}

void read(const std::string &file) {
    me::piotr::wera::MyMessageWrapper mess;

    fstream input(file, ios::in | ios::binary);
    if (!mess.ParseFromIstream(&input)) {
        cerr << "Failed to parse message." << endl;
        return;
    }

    for (const me::piotr::wera::MyMessage &person : mess.messages()) {
        cout << "Person ID: " << person.numbers().size() << endl;
        cout << "  Name: " << person.name() << endl;
        cout << "  Context: " << person.context() << endl;
    }

}

void write(const std::string &file) {
    me::piotr::wera::MyMessageWrapper mess;
    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_real_distribution<double> dist(1, 10000);
    for (int i = 0; i < 10; ++i) {
        me::piotr::wera::MyMessage *pMessage = mess.add_messages();
        const int value = dist(mt);
        pMessage->add_numbers(value);
        pMessage->set_name("nameee ");
        pMessage->set_context(me::piotr::wera::GOOD);
    }

    fstream output(file, ios::trunc | ios::out | ios::binary);
    mess.SerializeToOstream(&output);
    output.close();
}