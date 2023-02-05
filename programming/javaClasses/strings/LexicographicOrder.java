import java.util.*;
class LexicographicOrder{
    public static void main(String[] args){
        String str2=new String("Amrath");
        StringBuilder str3=new StringBuilder(str2);
        Scanner sc=new Scanner(System.in);
        StringBuilder str=new StringBuilder("aabbcd");
        StringBuilder str1=new StringBuilder("aabBce");
        if(str.compareTo(str1)==0) System.out.println("both strings are lexicographically equal");
        else if(str.compareTo(str1)<0) System.out.println("str is less than str1");
        else System.out.println("str is greater than str1");
    }
}