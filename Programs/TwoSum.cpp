vector<int> twoSum(vector<int>& nums, int target) {
        
        int sum = 0;
        vector<int> v;
        
        for(int i = 0 ; i < nums.size(); i++)
        {
            sum = nums[i] + nums[i+1];
            
            if(sum==target)
            {
                v.push_back(i);
                v.push_back(i+1);
                
                }
        } 
        return v;
    }
