public class Height {
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
        public static int height(Node root){
            if(root==null){
                return 0;
            }
            return Math.max(height(root.left),height(root.right))+1;
        }
        public static int countNodes(Node root){
            if(root==null){
                return 0;
            }
            return countNodes(root.left)+countNodes(root.right)+1;
        }static int sum=0;
        public static void sumOfNodes(Node root){
            if(root==null){
                return ;
            }
            sum=sum+root.data;
            sumOfNodes(root.left);
            sumOfNodes(root.right);
            
        }
    }

    public static void main(String args[]){
        Node root=new Node(1);
        root.left=new Node(2);
        root.right=new Node(3);
        root.left.left=new Node(4);
        root.left.right=new Node(5);
        root.right.right=new Node(6);
        root.right.right.right=new Node(9);
        BinaryTree b=new BinaryTree();
        System.out.println( b.height(root));
        System.out.println(b.countNodes(root));
        b.sumOfNodes(root);
        System.out.println(b.sum);
    }
}
