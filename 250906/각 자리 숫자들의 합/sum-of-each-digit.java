import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        String s = Integer.toString(a);

        int answer = 0;
        for(int i = 0 ; i < s.length(); i++) {
            answer += Integer.parseInt(s.substring(i, i + 1));
        }

        System.out.println(answer);
    }
}