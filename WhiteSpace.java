import java.util.Scanner;

class WhiteSpace{
    static void WhiteSpace(){
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        String[] r = s.split(" ");
        for(int i = 0; i < r.length; i++){
            System.out.print(r[i]);
        }
    }    
}
