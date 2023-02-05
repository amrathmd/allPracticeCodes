import java.util.Scanner;

class TernaryOperator{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int a=sc.nextInt();
        boolean check=(a%2==0) ? true:false;
        System.out.println(check);
    }
}