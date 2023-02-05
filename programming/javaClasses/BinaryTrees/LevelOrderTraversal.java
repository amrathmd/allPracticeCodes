import java.util.Queue;
import java.util.ArrayDeque;
import java.util.ArrayList;
public class LevelOrderTraversal {
    static class Node{
        int data;
        Node left;
        Node right;
        Node(int data){
            this.data=data;
            this.left=null;
            this.right=null;
        }
    }
    static class BinaryTree{
        public static ArrayList<Integer> traversal(Node root){
            ArrayList<Integer> res=new ArrayList();
            Queue<Node>q =new ArrayDeque<>();
            q.add(root);
            //q.add(null);
            while(!q.isEmpty()){
                Node temp=q.remove();
                if(temp!=null){
                    res.add(temp.data);
                    if(temp.left!=null){
                        q.add(temp.left);
                    }
                    if(temp.right!=null){
                        q.add(temp.right);
                    }
                }
                else{
                    if(!q.isEmpty()){
                        q.add(null);
                    }
                }

            }return res;
        }
    }
    public static void main(String args[]){
        Node root=new Node(1);
        root.left=new Node(2);
        root.right=new Node(3);
        root.left.left=new Node(4);
        root.left.right=new Node(5);
        root.right.right=new Node(6);
        ArrayList <Integer> res=new ArrayList<>();
        BinaryTree b=new BinaryTree();
        res=b.traversal(root);
        for(int d:res){
            System.out.print(d+" ");
        }
        System.out.println();
    }
}
