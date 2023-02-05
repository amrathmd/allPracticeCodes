public class MultipleLevel {
    public static void main(String args[]){
        Mammal d1=new Dog();
        //d1.sound(); 
        d1.eyes="Black";
        d1.color="Brown";
        d1.eat();
        Dog d2=new Dog();
        d2.legs=4;
       System.out.println(d2.getLegs()); 
        d2.eat();
        d2.sound();

        
    }
}
class Animal{
    String color;
    void eat(){
        System.out.println("Animal Eats");
    }
}
class Mammal extends Animal{
    String eyes;
}

class Dog extends Mammal{
    int legs;
    int getLegs(){
        return this.legs;
    }
    void sound(){
        System.out.println("Bow");
    }

}

