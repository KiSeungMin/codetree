import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc = new Scanner(System.in);

        String s = sc.nextLine();

        System.out.print((s.contains("ee") ? "Yes " : "No "));
        System.out.print((s.contains("ab") ? "Yes" : "No"));
    }
}