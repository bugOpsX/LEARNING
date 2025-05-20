//Print numbers from 1 to N

import java.util.Scanner;

public class printN{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the value of N: ");
        int N = sc.nextInt();
        for (int i = 1; i<=N; i++){
            System.out.println(i + " ");
        }
    }
}