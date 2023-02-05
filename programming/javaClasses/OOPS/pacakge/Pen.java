//name of package to be created
package MyPackage;
public class Pen{
    private int tip;
    private String color;
   
    public void setTip(int n){
        this.tip=n;
    }
    public void setColor(String color){
        this.color=color;
    }
    public String getColor(){
        return this.color;
    }
    public int getTip(){
        return this.tip;
    }

}
