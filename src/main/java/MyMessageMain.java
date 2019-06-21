import io.vavr.collection.Array;
import io.vavr.control.Try;
import me.piotr.wera.MyMessageOuterClass.MyMessage;
import me.piotr.wera.MyMessageOuterClass.MyMessageWrapper;

import java.io.FileInputStream;
import java.io.FileOutputStream;

public class MyMessageMain {
    private final String DATA = "f.data";

    public static void main(String[] args) {
        new MyMessageMain()
                .write()
                .read();
    }

    public MyMessageMain write() {
        MyMessage name1 = MyMessage.newBuilder().setName("name1").addNumbers(1).build();
        MyMessage name2 = MyMessage.newBuilder().setName("name222").addNumbers(22).build();
        MyMessageWrapper message = MyMessageWrapper.newBuilder()
                .addAllMessages(Array.of(name1 ,name2))
                .build();
        System.out.println("Writting Message:  " + message);
        Try.of(() -> new FileOutputStream(DATA, true))
                .andThenTry(os -> os.write(message.toByteArray()));
        return this;
    }

    public MyMessageMain read() {
        MyMessageWrapper myMessage = Try.of(() -> new FileInputStream(DATA))
                .mapTry(is -> MyMessageWrapper.parseFrom(is))
                .get();
        System.out.println("Reading Message:  " + myMessage);
        return this;
    }
}
