public class MethodOverloading {
    public static void main(String args[]){
        Sum s=new Sum();
        int a=5;
        int b=6;
       System.out.println( s.sum(a,b));
       System.out.println(s.sum(1,2,3));
       System.out.println(s.sum((float)1.0,(float)2.0));
    }
    
}
class Sum{
    int sum(int a,int b){
        return a+b;

    }
    int sum(int a,int b,int c){
        return (a+b)+c;
    }
    float sum(float a,float b){
        return a+b;
    }
    long sum(long a,long b){
        return a+b;    }
}
