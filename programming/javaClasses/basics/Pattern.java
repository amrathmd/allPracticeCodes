import java.util.*;

class Patter{
    public static void main(String args[]){
        int k=1;
        for(int i=0;i<5;i++){
            for(int j=0;j<=i;j++){
                System.out.print(k+" ");
                k++;
            }System.out.println();
        }
        
        for(int i=1;i<=5;i++){
            int l=i;
            for(int j=1;j<=i;j++){
                System.out.print(l+" ");
                l=l+5-j;
            }System.out.println();
        }
    }
}