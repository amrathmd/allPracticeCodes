import java.util.*;

class ControlFlow{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        do{
            if(n%10==0) break;
            else {
                n=sc.nextInt();
                System.out.println(n);
            }
                
                

        }while(true);
        
    }
}