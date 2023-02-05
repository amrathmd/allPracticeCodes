import java.util.*;
class Patterns{
    public static void main(String args[]){
        System.out.println("Stared:");
        for(int i=1;i<=5;i++){
            for(int j=1;j<=i;j++){
                System.out.print("* ");
            }System.out.println();
        }System.out.println("Inverted Star");
        for(int i=1;i<=5;i++){
            for(int j=1;j<=5-i+1;j++){
                System.out.print("* ");
            }System.out.println();
        }System.out.println("Half pyramid:");
        for(int i=1;i<=5;i++){
            for(int j=1;j<=i;j++){
                System.out.print(j+" ");
            }System.out.println();
        }System.out.println("Floyds Traingle:");
        int count=1;
        for(int i=1;i<=5;i++){
            for(int j=1;j<=i;j++){
                System.out.print(count+" ");
                count++;
            }System.out.println();
        }System.out.println("charecter patterns:");
        char ch='A';
        for(int i=1;i<=5;i++){
            for(int j=1;j<=i;j++){
                System.out.print(ch+" ");
                ch++;
            }System.out.println();
        }System.out.println("Hallow Rectangle:");
        for(int i=1;i<=5;i++){
            for(int j=1;j<=5;j++){
                if(j==1 || j==5 || i==1 || i==5){
                    System.out.print("* ");
                }else {
                    System.out.print(" "+" ");
                }
            }System.out.println();
        }System.out.println("Inverted pyramid");
        for(int i=1;i<=5;i++){
            for(int j=1;j<=5;j++){
                if(j>= 5-i+1){
                    System.out.print("* ");
                }else{
                    System.out.print("  ");
                }
            }System.out.println();
        }System.out.println("Inverted Half numbers:");
        for(int i=1;i<=5;i++){
            for(int j=1;j<=5-i+1;j++){
                System.out.print(j+" ");
            }System.out.println();
        }
        
    }
}