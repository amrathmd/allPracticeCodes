import java.util.*;
class CopyConstructor{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        Employee e1=new Employee();
        e1.id=8;
        e1.name="Amrath";
        e1.dept="civil services";
        System.out.println(e1.name+" "+ e1.dept+" "+ e1.name);
        Employee e2=new Employee(e1);
        System.out.println(e2.name+" "+ e2.dept+" "+ e2.name);
        e1.name="Shiva";
        System.out.println(e2.name+" "+ e1.dept+" "+ e1.name);//shallow copy
        //deep copy


        sc.close();
    }
}
class Employee{
    int id;
    String name;
    String dept;
    Employee(){

    }
    Employee(Employee e){
        this.id=e.id;
        this.name=e.name;
        this.dept=e.dept;
    }
}