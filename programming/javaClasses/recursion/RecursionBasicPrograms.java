//import java.util.*;
public class RecursionBasicPrograms {
    public static int fib(int n){
        if(n==0 || n==1) return n;
        return fib(n-1)+fib(n-2);
    }
    public static int sumOfN(int n){
        if(n==1) return 1;
        return n+sumOfN(n-1);
    }
    public static int fact(int n){
        if(n==1) return 1;
        int fn1=fact(n-1);
        int fn=fn1*n;
        return fn;
    }
    public static void main(String args[]){
        System.out.println(fib(5));// 0 1 1 2 3 5
        System.out.println(sumOfN(5));
        System.out.println(fact(5));
        System.out.println(Integer.MAX_VALUE);
    }
}
    