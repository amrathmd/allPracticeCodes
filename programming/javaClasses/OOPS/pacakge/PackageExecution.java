import java.util.*;
import MyPackage.*;
class PackageExecution{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        Pen p=new Pen();
        //p.tip=5;
        p.setTip(5);
        p.setColor("Blue");
        System.out.println(p.getColor());
        System.out.println(p.getTip());

    }
}