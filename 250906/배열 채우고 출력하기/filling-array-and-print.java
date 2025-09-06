import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc = new Scanner(System.in);
        int N = 10;
        String[] li = new String[N];

        for(int i = 0; i < N; i++) {
            li[i] = sc.next();
        }

        for(int i = N - 1; i >= 0; i--) {
            System.out.print(li[i]);
        }
    }
}