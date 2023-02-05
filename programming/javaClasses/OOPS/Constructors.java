
class Constructors{
    public static void main(String args[]){
        //Student s=new Student(); defalut constructor is overriden so this shows error;
        Student s=new Student("Amrath","9666374853");
        System.out.println(s.name);

        System.out.println(s.password);
        
    }
}
class Student{
    String name;
    String password;
    Student(String name){//constrructors are defined by clss
        this.name=name;
    }
   /* Student (String password){
        this.password=password;
    }*/
    Student(String name,String password){//constructor overriding;
        this.name=name;
        this.password=password;
    }

}