import java.util.Scanner;
import java.util.ArrayList;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        // Please write your code here.

        ArrayList<Integer> li = new ArrayList<>();
        for(int n = 0; n < N; n++){
            String cmd = sc.next();
            int num = 0;
            if(cmd.equals("push_back") || cmd.equals("get")){
                num = sc.nextInt();
            }

            if(cmd.equals("push_back")){
                li.add(num);
            } else if(cmd.equals("pop_back")){
                li.remove(li.size() - 1);
            } else if(cmd.equals("size")){
                System.out.println(li.size());
            } else if(cmd.equals("get")){
                System.out.println(li.get(num - 1));
            }
        }
    }
}