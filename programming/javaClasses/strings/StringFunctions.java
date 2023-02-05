import java.util.*;
class StringFunctions{
    public static void main(String args[]){
        String str=new String("Amrath Qureshi");
        String str1="Amrath Qureshi";
        String str2="Amrath Qureshi";
        for(int i=0;i<str.length();i++){
            System.out.print(str.charAt(i));
        }
        System.out.println(str1==str2);//true
        System.out.println(str==str1);//false
        System.out.println(str.equals(str1));//true once check into this
        //System.out.println(str.subString(0,6));
        //compareTo function in lexicographic order;
        //toStrin function in compression program;
    }
}