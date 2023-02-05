import java.util.*;
class ClearBitsInRange{
    public static int clear(int n,int i,int j){
        int a=~0 << (j+1);
        int b=(1<<i)-1;
        int bitMask=(a | b);
        return bitMask & n;
    }
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        System.out.println(clear(n,2,6));

    }

}