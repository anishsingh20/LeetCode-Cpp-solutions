//simple method to find maximum product of 3 numbers in an array using sorting-the array also has negetive inputs

 int maximumProduct(vector<int>& nums) {
        

        sort(nums.begin(), nums.end());
        
        //case when array has either all positive , or all negetive elements 
        if (nums[0] >= 0 || nums[nums.size()-1] <= 0)
            return nums[nums.size()-1]*nums[nums.size()-2]*nums[nums.size()-3];
        
        return max(nums[nums.size()-1]*nums[nums.size()-2]*nums[nums.size()-3], nums[0]*nums[1]*nums[nums.size()-1]);
    }
