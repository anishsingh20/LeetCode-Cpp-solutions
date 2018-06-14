//Method-2)Not efficient and not in-place as consumes O(n) extra memory due to using set in cpp
 int removeDuplicates(vector<int>& nums) {
        
        set<int>s;
        for(int i = 0 ; i < nums.size(); i++)
        {
            s.insert(nums[i]);
        }
        
       int j = 0 ;
        
      
        for(set<int>::iterator i = s.begin() ; i!=s.end() ; i++)
             nums[j++] = *i;
            
               
        
        
        return j;
