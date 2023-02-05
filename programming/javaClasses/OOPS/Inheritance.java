
public class Inheritance {
    public static void main(String args[]){
        Animal a=new Animal();
        a.color="Brown";
        //a.eat();
        //a.walk();
        Animal h=new Horse();
        h.eat();
        //h.changeColor("Brown");//change color not defined for animal h;
       // h.breed="magna"; cant access
        h.walk();
        Horse h1=new Horse();
        h1.color="brown";
        h1.walk();
        h1.changeColor("Black");
        h1.breed="Magne";
        System.out.println(h1.color);
        System.out.println(h1.breed);

    }
}
class Animal{
    String color;
    void eat(){
        System.out.println("EAT");
    }
    void walk(){
        System.out.println("WALK");
    }
}
class Horse extends Animal{
    String breed;
    void changeColor(String color){
        super.color=color;
    }
}
