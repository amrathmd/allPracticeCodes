import java.util.*;
class StringCompression{
    public static void main(String args[]){
        String str="abbbbccddd";
        String res=compress(str);
        System.out.println(res);
    }
    public static String compress(String str){
        String res=new String("");
        for(int i=0;i<str.length();i++){
            Integer count=1;
            while(i<str.length()-1 && str.charAt(i)==str.charAt(i+1)){
                count++;
                i++;
            }
            res=res+str.charAt(i);
            if(count>1){
                res=res+count.toString();
            }
        }return res;
    }
}