import java.util.*;
class OperationsOnBits{
    public static int setBit(int n,int i){
        return n | (1<<i);
    }
    public static int clearBit(int n,int i){
        return n & ~(1<<i);
    }
    public static int updateBit(int n,int i,int BitChange){
       if(BitChange==1) return setBit(n,i);
        return clearBit(n,i);
    }
    public static int getIthBit(int n,int i){
        return n & (1<<i);
    }
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int a=sc.nextInt();
        System.out.println(setBit(a,2));
        System.out.println(clearBit(a,3));
        System.out.println(updateBit(a,2,1));
        System.out.println(getIthBit(a,1));
    }
}