vector<int> twoSum(vector<int>& nums, int target) {
        
        for(int i = 0 ;  i < nums.size() ; i++)
        {
            for(int j = i + 1 ; j < nums.size(); j++)
            {
                if(nums[i]+ nums[j]==target)
                {
                    return {i,j};
                }
            }
        }
    }
//Time complexity = O(n*n)

//solution 2-Using a hash map

vector<int> twoSum(vector<int>& nums, int target) 
    {
        
       unordered_map<int,int> um; 
       for(int i=0 ; i < nums.size() ; i++)
       {
           int comp = target - nums[i];
           auto found = um.find(comp);
           if(found == um.end())
           {
               um.insert(make_pair(nums[i],i));          
           }
           else
           {
               
               return {found->second,i};
           }
               
           
       }
       
        
    }
//Time complexity = O(n)
