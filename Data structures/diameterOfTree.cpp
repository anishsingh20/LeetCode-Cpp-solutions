int height(TreeNode *root)
{
    if(!root)
        return 0;
    
    int lh = height(root->left);
    int rh = height(root->right);
    
    if(lh > rh)
            return 1+lh;
    else return 1+rh;
}
    int diameterOfBinaryTree(TreeNode* root) {
        
        if(!root) return 0;
        
        int lh = height(root->left);
        int rh = height(root->right);
        
        int ldia = diameterOfBinaryTree(root->left);
        int rdia = diameterOfBinaryTree(root->right);
        
        return max(lh+rh,max(ldia,rdia));
        
        
        
    }//T(n) = O(n*n)
