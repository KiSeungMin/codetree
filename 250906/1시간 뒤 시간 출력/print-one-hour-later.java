import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc = new Scanner(System.in);

        String s = sc.next();
        String[] list = s.split(":");
        int hour = Integer.parseInt(list[0]);
        int minute = Integer.parseInt(list[1]);

        System.out.println((hour + 1)  + ":" + minute);
    }
}