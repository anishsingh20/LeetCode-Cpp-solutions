//method-1 without using aux arrays-simple O(n) time and O(1) extra space solution-
int maxProduct(vector<int>& nums) {
       
        int res = nums[0];
        
        int curmax = nums[0],curmin = nums[0];
        
        for(int i = 1 ; i < nums.size() ; i++)
        {
            if(nums[i] < 0)
                swap(curmax,curmin);
            
            curmax = max(nums[i],curmax*nums[i]);
            curmin = min(nums[i],curmin*nums[i]);
        
            
            res = max(res,curmax);
        }
        
        return res;
       
    }

//Method-2 :optimal O(n) solution using 2 arrays, one to store the maximum subarray product and another to store the minimum subarray products
int maxProduct(vector<int>& nums) {
       
        vector<int>maxDp(nums.size(),nums[0]);//to store max subarray products
        vector<int>minDp(nums.size(),nums[0]);//to store min subaray products
        
        int res = nums[0];
        
        for(int i = 1; i < nums.size() ; i++)
        {
           
            //if current item is negetive, then swap minimum and maximum subarray products          
            if(nums[i] < 0)
                 swap(maxDp[i-1],minDp[i-1]);
            
            maxDp[i] = max(nums[i] , nums[i]*maxDp[i-1]);
            
            minDp[i] = min(nums[i], nums[i]*minDp[i-1]);
            
            res = max(res,maxDp[i]);
            
            
                                
        }
        
        return res;
}
