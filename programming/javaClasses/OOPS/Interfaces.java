public class Interfaces {
    public static void main(String args[]){
        chessPlayer q=new Queen();
        q.move();
        //q.jump();
        Queen q1=new Queen();
        q1.jump();
        Pan p=new Pan();
        p.move();
    }
}

interface chessPlayer{
    void move();
}
class Queen implements chessPlayer{
    public void move(){
        System.out.println("UP DOWN BOTTOM DIAGONAL LEFT RIGHT");
    }
    void jump(){
        System.out.println("Jumped");
    }
} 
class Pan implements chessPlayer{
    public void move(){
        System.out.println("FRONT SIDEWAYS");
    }
}
