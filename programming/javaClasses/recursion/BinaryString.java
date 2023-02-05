class BinaryString{
    public static void stringPrinting(String s,int n,int lastChar){
        if(n==0){
            System.out.println(s);
            return;
        }stringPrinting(s+"0",n-1,0);
        if(lastChar==0){
            stringPrinting(s+"1",n-1,1);
        }
        
        
    }
    public static void main(String args[]){
        String s="";
        stringPrinting(s,3,0);
    }
}