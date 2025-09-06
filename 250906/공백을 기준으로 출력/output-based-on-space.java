import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc = new Scanner(System.in);
        String s1 = sc.nextLine();
        String s2 = sc.nextLine();

        String[]li1 = s1.split(" ");
        String[]li2 = s2.split(" ");

        for(int i = 0; i < li1.length; i++) {
            System.out.print(li1[i]);
        }
        for(int i = 0; i < li2.length; i++){
            System.out.print(li2[i]);
        }
    }
}