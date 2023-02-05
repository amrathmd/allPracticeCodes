import java.util.*;
public class OOPS{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in); 
        Student s=new Student();
        s.name="Amrath";
        s.rollNo=3;
        System.out.println(s.name);
        System.out.println(s.getRollNo());
        s.changeStringName("Shiva");
        System.out.println(s.name);
        sc.close();

    }
}
class Student
{
    int rollNo;
    String name;

    void changeStringName(String Name){
        this.name=Name;
    }
    int getRollNo(){
        return this.rollNo;
    }
}
