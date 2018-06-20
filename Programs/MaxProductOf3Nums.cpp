//simple method to find maximum product of 3 numbers in an array using sorting-the array also has negetive inputs

int maximumProduct(vector<int>& nums) {
        

        sort(nums.begin(),nums.end());
        int size = nums.size()-1;
        return max(nums[0]*nums[1]*nums[size],nums[size]*nums[size-1]*nums[size-2]);
        
    }
