package Algorithm.DP;

import java.math.BigInteger;
import java.util.Scanner;

public class FibonacciModified {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        BigInteger t0, t1, ti = null;
        t0=sc.nextBigInteger();
        t1=sc.nextBigInteger();
        int n;
        n=sc.nextInt();
        for(int i = 2; i<n; i++){
            ti=t0.add(t1.multiply(t1));
            t0=t1; t1=ti;
        }
        System.out.println(ti.toString());
    }
}
