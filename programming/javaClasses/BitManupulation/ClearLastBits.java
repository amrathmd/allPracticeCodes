import java.util.*;
class ClearLastBits{
    public static int clearLastBits(int n,int i){
        return n & (~0<<i);
    }
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        System.out.println(clearLastBits(n,3));

    }
}