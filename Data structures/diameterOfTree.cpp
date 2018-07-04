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
