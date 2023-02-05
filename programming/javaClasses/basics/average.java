import java.util.*;
 
public class average{
    public static void main(String args[]){
        int a,b,r;
        Scanner sc=new Scanner(System.in);
        a=sc.nextInt();
        b=sc.nextInt();
        r=sc.nextInt();
        System.out.print("Average of three numbers:");
        System.out.println((a+b+r)/3);
        int $ =2;
        System.out.print($);
        byte bt=4;
        char c='a';
        short s=512;
        int i=1000;
        float f=3.14f;
        double d=99.9954;
        System.out.print((f*bt)+(i%c)-(d*s));
    }
}