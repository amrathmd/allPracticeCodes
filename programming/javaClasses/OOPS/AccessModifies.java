import java.util.*;
class AccessModifiers{
    public static void main(String args[]){
        Student s=new Student();
        s.createAccount();
        s.setMarks(10);
        s.getMarks();
    }
}
class Student{
    public String name;
    private String Password;
    public int marks;
    Scanner sc=new Scanner(System.in);
    public void createAccount(){
        
        System.out.println("Enter the name:");
        this.name=sc.nextLine();
        System.out.println("Enter the password:");
        this.Password=sc.nextLine();
    }
    void setMarks(int n){
        this.marks=n;
    }
    void getMarks(){
        System.out.println("Enter the password");
        String ps=sc.nextLine();
        if(ps.compareTo(this.Password)==0){
            System.out.println(this.marks);
        }else{
            System.out.println("Password entered is wrong");
        }
    }


}
