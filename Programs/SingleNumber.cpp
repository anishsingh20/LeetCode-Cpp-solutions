//Solution 1- O(n^2) time complexity- using STL and std::algorithms functions

int singleNumber(vector<int>& nums) {
        
        vector<int>::iterator it;
         
        
       
        for(it = nums.begin();it!=nums.end();it++)
        {
            int co = count(nums.begin(),nums.end(),*it);
            
            if(co < 2)
            {
                 return *it;
                break;
            }
            
               
        }
        
    }
