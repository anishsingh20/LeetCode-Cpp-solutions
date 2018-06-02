void InsertVector(struct TreeNode *root,vector<int>&v)
    {
        if(!root)
                return;
        
       
            InsertVector(root->left,v);
            
            v.push_back(root->val);
        
            InsertVector(root->right,v);
        
    }
    
    bool findTarget(TreeNode* root, int k) {
        
        vector<int> v; //a sorted vector
        
        //populating the vector
        InsertVector(root,v);
        
        int begin = 0;
        int end  = v.size()-1;
        
        while(begin!=end)
        {
            
            if((v[begin] + v[end])==k)
                return true;
            
            ((v[begin]+ v[end] < k)) ? begin++ : end--; 
            
        }
        
        
        return false;
        
    } //T(n) = O(n) linear time algorithm
