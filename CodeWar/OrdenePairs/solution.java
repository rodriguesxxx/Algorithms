import java.util.*;
import java.io.*;

class Solution {

    public static boolean isPair(int number) {
        return (number % 2 == 0) ? true : false;
    }

    public static void main(String args[]) {
        Scanner in = new Scanner(System.in);
        int N = in.nextInt();
        int pair;
        List<Integer> numbers = new ArrayList<>();
        for (int i = 0; i < N; i++) {
            int integer = in.nextInt();
            numbers.add(integer);
            System.out.println(numbers.get(i));
        }




        System.out.println("Print the sorted list");
    }

    public static List<Integer> ordene(List<Integer> numbers) {
        for(int i = 1; i < numbers.size(); ++i) {
            int x = numbers.get(i);
            for (int j = i-1; j >= 0 && numbers.get(j) > x; --j){
                numbers.set(j+1, numbers.get(j));
            }
            numbers.set(i+1, x);
        }
        return numbers;
    }
}
