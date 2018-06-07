//method-1 Optimal solution- linear time algorithm and constant space.
int singleNumber(vector<int>& nums) {
        
        vector<int>::iterator it;
        
        
        //sorting the array
       sort(nums.begin(),nums.end());
        int i = 0;
       for( ; i < nums.size()-1; i+=2)
       {
           
               if(nums[i]-nums[i+1]!=0) 
               {
                   return nums[i];
                   break;
               }
           
         }
        
        return nums[i];
        
       
        
    }


//Solution2- O(n^2) time complexity- using STL and std::algorithms functions

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



