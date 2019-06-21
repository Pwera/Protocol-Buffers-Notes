import io.vavr.collection.Array;
import io.vavr.control.Try;
import me.piotr.wera.ContextEnumOuterClass.ContextEnum;
import me.piotr.wera.MyMessageOuterClass.MyMessage;

import java.io.FileInputStream;
import java.io.FileOutputStream;

public class Main {
    private final String DATA = "f.data";

    public static void main(String[] args) {
        new Main().write().read();
    }

    public Main write() {
        MyMessage message = MyMessage.newBuilder()
                .setContext(ContextEnum.GOOD)
                .addAllNumbers(Array.of(Integer.MIN_VALUE, 2, Integer.MAX_VALUE))
                .build();
        System.out.println("Writting Message:  " + message);
        Try.of(() -> new FileOutputStream(DATA))
                .andThenTry(os -> os.write(message.toByteArray()));
        return this;
    }

    public Main read() {
        MyMessage myMessage = Try.of(() -> new FileInputStream(DATA))
                .mapTry(is -> MyMessage.parseFrom(is)).get();
        System.out.println("Reading Message:  " + myMessage);
        return this;
    }
}
