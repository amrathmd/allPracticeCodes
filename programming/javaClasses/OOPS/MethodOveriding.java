public class MethodOveriding {
    public static void main(String args[]){
        Dog a=new Dog();
        a.eat();
        Animal a1=new Dog();
        a1.eat();
    }
}
class Animal{
    void eat(){
        System.out.println("Animal Ate");
    }
}
class Dog extends Animal{
    void eat(){
        System.out.println("Dog eats");
    }
    void walk(){
        System.out.println("A");
    }
}
