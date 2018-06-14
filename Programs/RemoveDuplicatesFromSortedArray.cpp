//Method-1) efficient in-place solution, consumes constant memory O(1)
int removeDuplicates(vector<int>& nums) {
        

        if (nums.size() < 1)
            return 0;
        
        int count = 1;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] != nums[count-1])
                nums[count++] = nums[i];
        }
        
        
        return count;
    
 
    }



/*Method-2)Not efficient and not in-place as consumes O(n) extra memory due to using set in cpp-
1)Store all items of the array in a set.
2) A set in cpp is implemented using red-black trees. A set stores unique items in an ordered manner.
3)All operations in a set are guranteed to take O(logn) time.
4) now copy back the unique items of set to the original array.
*/

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
