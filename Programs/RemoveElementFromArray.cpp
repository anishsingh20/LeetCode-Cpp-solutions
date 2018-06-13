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
