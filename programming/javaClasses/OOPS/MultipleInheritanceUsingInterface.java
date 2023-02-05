public class MultipleInheritanceUsingInterface {
    public static void main(String args[]){
        Bear b=new Bear();
        b.eat();
        b.eatMeat();
    }
}
interface Herbivores{
    void eat();
}
interface Carnivores{
    void eatMeat();
}
class Bear implements Herbivores, Carnivores{
    public void eat(){
        System.out.println("I eat grass ");
    }
    public void eatMeat(){
        System.out.println("I also eat Meat");
    }
}
