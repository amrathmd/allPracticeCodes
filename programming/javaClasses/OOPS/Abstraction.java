public class Abstraction {
   public static void main(String args[]){
        Dog a=new Dog();
        a.walk();
        Animal f=new Fish();
        f.walk();
        System.out.println(f.color);
        Fish f1=new Fish();
        System.out.println(f1.color);
        f1.changeColor("Black");
        System.out.println(f1.color);
   }
}
abstract class Animal{
    String color;

    Animal(){
        System.out.println("Animal Created");
        color="Brown";
    }
    abstract void walk();
    void eat(){
        System.out.println("Eat");
    }
}
class Fish extends Animal{
    Fish(){
        System.out.println("Fish constructor called");
    }
    void changeColor(String newcolor){
        this.color=newcolor;
    }
    void walk(){
        System.out.println("I swim yaar");
    }
}
class Dog extends Animal{
    void walk(){
        System.out.println("I walk on 4 legs");
    }
}
