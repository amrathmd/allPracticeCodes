import java.util.Scanner;
class LargestOfThree{
    public static void main(String args[]){
        int a=3,b=5,c=6;
        if(a>b && a>c) {
            System.out.println("The largest is A");
        }
        else if(b>a && b>c){
            System.out.println("The largest is B");
        }
        else{
            System.out.println("The largest is C");
        }
    }
}