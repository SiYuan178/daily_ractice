package senior;
import java.util.Scanner;

public class HelloWorld {
        public static void main(String[] args){
            Scanner sc=new Scanner(System.in);
            int n=sc.nextInt();
            sc.nextLine ();
            String str=sc.nextLine ();
            String substr="SUST";
            int count=0;
            int index=0;
            while(str.indexOf(substr,index)!=-1){
                index=str.indexOf(substr,index)+1;
                count++;
            }
            System.out.println(count);

    }


}
