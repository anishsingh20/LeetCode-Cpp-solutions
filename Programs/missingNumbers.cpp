int missingNumber(vector<int>& nums) {
        
        
        
        vector<int>::iterator it;

        for(int i = 0 ; i <= nums.size() ; i++)
        {
            it = find(nums.begin(),nums.end(),i);
            
            if( it != nums.end())
            {
                continue;
            }
            else
            {
                return i;
                break;
            }
        }
        
        
        
       
        
    }
