 bool sol(TreeNode* root, TreeNode* subRoot){
        if(root==NULL && subRoot==NULL) return true;
        if(root==NULL && subRoot) return false;
        if(root && subRoot==NULL) return false;
        if(root->val==subRoot->val){
            return sol(root->left,subRoot->left) && sol(root->right,subRoot->right);
        }
        else{
            return false;
        }
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root==NULL ) return false;
        if(root && subRoot==NULL) return true;
        if(root->val==subRoot->val){
            if(sol(root,subRoot))  return true;
        }return isSubtree(root->left,subRoot) || isSubtree(root->right,subRoot);
}