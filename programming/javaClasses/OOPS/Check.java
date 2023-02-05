//import java.util.*;
class Check{
    public static void main(String args[]){
        Animal a=new Animal();
        Dog d=new Dog();
        d.eat();
        a.eat();
    }
}
class Animal{
    void eat(){
        System.out.println("Animal EAT");
    }
}
class dog extends Animal{
    void eat(){
        System.out.println("Dog Eat");
    }
}
