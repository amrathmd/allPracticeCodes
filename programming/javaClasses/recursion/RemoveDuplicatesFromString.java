
public class RemoveDuplicatesFromString{
    public static void  util(String s,StringBuilder res,boolean map[],int i){
        if(i==s.length()) {
            return ;
        }
        char currChar=s.charAt(i);
        int index=currChar-'a';
        if(map[index]==false){
            map[index]=true;
            util(s,res.append(currChar),map,i+1);
        }
        util(s,res,map,i+1);
    }
    public static String removeDuplicateLetters(String s) {
        StringBuilder res=new StringBuilder("");
        boolean map[]=new boolean[26];
        for(int i=0;i<26;i++){
            map[i]=false;
        }
        util(s,res,map,0);
        String re=res.toString();
       return re;
    }
    public static void main(String args[]){
        String s="abbbcddde";
        System.out.println(removeDuplicateLetters(s));
        
    }
}