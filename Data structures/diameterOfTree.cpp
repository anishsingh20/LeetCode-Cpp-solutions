//another optimal method to find diameter using the fact that diameter is simply the max(left_ht + right_ht + 1) for each node
int height(TreeNode *root,int &ans)
{
    if(!root) return 0;
    
    int lht = height(root->left,ans);
    int rht = height(root->right,ans);
    
    //finding the diameter ie max of left_ht + right_ht for each node
    ans = max(ans,lht+rht);
    
    //return the height of tree
    return 1+max(lht,rht);
}
    int diameterOfBinaryTree(TreeNode* root) {
        
        if(!root) return 0;
        int ans = INT_MIN;
        
        int ht = height(root,ans);
        
        return ans;
        
    }

//O(n) solution i.e calculating height in the function itself-
int diaUtil(TreeNode *root,int *height)
    {
        int lt=0,rt=0,ldia=0,rdia=0;
        if(!root)
        {
            *height = 0;
            return 0;
        }
        
        
        ldia = diaUtil(root->left,&lt);
        rdia = diaUtil(root->right,&rt);
        
        
        *height = max(lt,rt) + 1;
        
        return max(lt+rt,max(ldia,rdia));
    }
   
    int diameterOfBinaryTree(TreeNode* root) {
        
        if(!root) return 0;
        int ht = height(root);
        int dia = diaUtil(root,&ht);
        
        return dia;
        
    }

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
