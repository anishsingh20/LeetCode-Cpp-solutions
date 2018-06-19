//program to find PIVOT of an array , PIVOT is the index, whose sum of items in left of pivot equals the sum of items in right of pivot.
  
  //optimal solution which takes O(n) time
  int pivotIndex(vector<int>& nums) {
     
        int sum = 0;
        for(int i = 0; i< nums.size(); i++)
            sum += nums[i];
        
        int temp = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            if(temp * 2 + nums[i] == sum)
                return i;
            temp += nums[i];
        }
        
        return -1;
        
    }


//another solution to find pivot index
int pivotIndex(vector<int>& nums) {
        
        int sumr = 0;
        
        for(int i = 0 ; i < nums.size() ; i++)
        {
            sumr += nums[i];
        }
        
        int suml = 0;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            suml += nums[i];
            sumr -= nums[i];
            
            if(suml-nums[i] == sumr)
            {
                return i;
            }
            
            
        }
        
        return -1;
        
    }

//another optimal solution similar to the above one to find Pivot
int pivotIndex(vector<int>& nums) {
        int rightSum = 0;
        for(int i = 0;i<nums.size();i++){
            rightSum += nums[i];
        }
        int leftSum = 0;
        for(int i = 0;i<nums.size();i++){
            leftSum += nums[i];
            if(leftSum == rightSum){
                return i;
            }
            rightSum -= nums[i];
        }
        return -1;
    }
