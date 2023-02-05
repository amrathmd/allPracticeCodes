import java.util.*;
class DivideTwoInteger{
    public static void main(String args[]){
        long a=10;
        long b=2;
        int n=31;
        int ans=0;
        while(n>=0){
            if((b<<n) <= a){
                a=a-(b<<n);
                ans=ans+(1<<n);

            }
            n--;
        }System.out.println(ans);
        }
}