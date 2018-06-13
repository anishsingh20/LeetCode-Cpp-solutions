int removeElement(vector<int>& nums, int val) {
        
     vector<int>::iterator pend;
        int count=0;
        
        pend = std::remove(nums.begin(),nums.end(),val);
        
        for ( std :: vector<int> :: iterator p=nums.begin(); p != pend; ++p)
        {
            count++;
            
        }
                
        return count;
       
       
    }
    //code to remove all elements matching val from an array using STL function

//method 2- modifying the existing array by copying only unique elements in it, not the repeated ones.
int removeElement(vector<int>& nums, int val) {
        
     vector<int>::iterator it;
        int count = 0 ;
        
        for(it = nums.begin(); it!=nums.end();it++)
        {
            //inserting only unique values in nums now
            if(*it!=val)
                nums[count++] = *it;
            
        }
        
        return count;

        
        //method3-
        int removeElement(vector<int>& nums, int val) {
        
      int i = 0;
    int n = nums.size();
    while (i < n) {
        if (nums[i] == val) {
            nums[i] = nums[n - 1];
            // reduce array size by one
            n--;
        } else {
            i++;
        }
    }
    return n;
    }
