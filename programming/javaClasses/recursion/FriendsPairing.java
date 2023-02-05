
class FriendsPairing{
    public static int friendsPairing(int n){
        if(n==1 || n==0) return 1;
        int fnm1=friendsPairing(n-1);
        int fnm2=friendsPairing(n-2);
        int totalWays=fnm1+(n-1)*fnm2;
        return totalWays;
    }
    public static void main(String args[]){
        System.out.println(friendsPairing(4));
    }
}