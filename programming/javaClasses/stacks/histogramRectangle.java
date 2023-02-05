import java.util.Stack;
class Histogram{
    public static void main(String args[]){
        int heights[]={2,1,5,6,2,3};
        int [] nsl=new int[heights.length];
        int [] nsr=new int[heights.length];
        Stack <Integer>st=new Stack<>();
        nsl[0]=-1;
        st.push(0);
        for(int i=1;i<heights.length;i++){
            while(!st.empty()){
                if(heights[st.peek()] > heights[i] )
                    st.pop();
                else 
                    break;
            }
            if(st.empty()){
                nsl[i]=-1;
                st.push(i);
            }
            else {
                nsl[i]=st.peek();
                st.push(i);
            }
        }
        for(int a:nsl){
            System.out.println(a);
        }
        st.clear();
        nsr[heights.length-1]=-1;
        st.push(heights.length-1);
        for(int i=heights.length-2;i>=0;i--){
            while(!st.empty()){
                if(heights[st.peek()] > heights[i] )
                    st.pop();
                else 
                    break;
            }
            if(st.empty()){
                nsr[i]=heights.length;
                st.push(i);
            }
            else {
                nsr[i]=st.peek();
                st.push(i);
            }
        }
        st.clear();
        for(int a:nsr){
            System.out.println(a);
        }
        int res=-1;
        for(int i=0;i<heights.length;i++){
            if(nsl[i]==-1 && nsr[i]==-1){
                int area=heights[i]*heights.length;
                if(area>res){
                    res=area;
                }
            }
           if(nsl[i]!=-1 && nsr[i]!=-1){
            int area=Math.abs(nsr[i]-nsl[i]-1) * heights[i]; 
            if(area>res){
                res=area;
            }
           }
        }System.out.println(res);
        
    }
}