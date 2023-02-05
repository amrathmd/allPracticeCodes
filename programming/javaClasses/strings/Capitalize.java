import java.util.*;
class Capitalize{
    public static void main(String args[]){
    StringBuilder str=new StringBuilder("hi, i am amrath qureshi");
    StringBuilder res=capitalize(str);
    System.out.println(res);
    }
    public static StringBuilder capitalize(StringBuilder str){
        StringBuilder res=new StringBuilder("");
        res.append(Character.toUpperCase(str.charAt(0)));
        for(int i=1;i<str.length()-1;i++){
            if(str.charAt(i)==' ' && i<str.length()-1){
                res.append(" ");
                i++;
                res.append(Character.toUpperCase(str.charAt(i)));
            }
            else{
                res.append(str.charAt(i));
            }
        }return res;
    }
}