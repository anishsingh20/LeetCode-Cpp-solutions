//iterative solution - T(n) =  O(n*n)-inefficient, space = O(1)-Simple solution
int subarraySum(vector<int>& nums, int k) {
        
      int count = 0 ;
        
        for(int i = 0 ; i < nums.size(); i++)
        {
            int sum = 0 ;
            for(int j = i ; j < nums.size(); j++)
            {
                sum += nums[j];
                if(sum == k)
                        count++;
            }
        }
        
        return count;
    }

//method-1 Most efficient T(n) = O(n) using a hash map to store sum and their frequencies
int subarraySum(vector<int>& nums, int k) {
      
      unordered_map<int,int> s;
        
        int count = 0;
        int sum = 0 ;
        
        s[0] = 1;
        for(int i = 0 ; i < nums.size(); i++)
        {
            sum += nums[i];
            auto f = s.find(sum-k);
            if(f != s.end())    
            {
                count += f->second;
            }
            
            ++s[sum];

          
        }
        
        return count;
      
    }
