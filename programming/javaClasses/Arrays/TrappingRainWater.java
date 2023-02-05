import java.util.*;
class TrappingRainWater{
    public int trap(int[] height) {
        if(height.length==1 || height.length==2) return 0;
        int rightMax[]=new int[height.length];
        int leftMax[]=new int[height.length];
        int maxi=Integer.MIN_VALUE;
        for(int i=0;i<height.length;i++){
            maxi=Math.max(maxi,height[i]);
            leftMax[i]=maxi;
        }
        maxi=Integer.MIN_VALUE;
        for(int i=height.length-1;i>=0;i--){
            maxi=Math.max(maxi,height[i]);
            rightMax[i]=maxi;
        }
        int res=0;
        for(int i=0;i<height.length;i++){
            res=res+Math.min(rightMax[i],leftMax[i])-height[i];
        }
        return res;
        
    }
    public static void main(String args[]){
        int arr[]={4,2,0,3,2,5};
        System.out.println(trap(arr));
    }
}