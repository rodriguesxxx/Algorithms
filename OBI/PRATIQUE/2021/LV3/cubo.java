// package LV3;
import java.util.Scanner;
import java.math.*;

public class cubo {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        Integer A = sc.nextInt();
        Integer B = sc.nextInt();

        int qtd = 0;

        for(int i = A; i <= B; ++i) {
            int x =  (int) Math.sqrt(i);
            int y = (int) Math.cbrt(i);
            if(Math.pow(x, 2) == Math.pow(y, 3)) {
                qtd+=1;
            }
        }
        // int i = 64;
        // Double x = Math.sqrt(i);
        // Double y = Math.cbrt(i);
        // System.out.println(Math.pow(x, 2));
        // System.out.println(Math.pow(y, 3));

        // if(Math.pow(x, 2) == Math.pow(y, 3)) {
        //     System.out.println("FODA-SE VADIA");
        // }
        System.out.println(qtd);
        sc.close();
    }
}
