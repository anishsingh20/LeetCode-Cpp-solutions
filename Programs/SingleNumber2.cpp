//given an array, where each element occurs 3 times, find the one which occurs only once.

//Solution1-Using bit manipulation-XOR and other bitwise ops-
int singleNumber(vector<int>& nums) {
int a = 0, b = 0;
		for (int i : nums) {
			b = (b ^ i) & ~a;
			a = (a ^ i) & ~b;
		}
		return b;
    } //runtime = 10ms


//another solution for finding the element which occurs only once.
int singleNumber(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        
        for(int i = 0 ; i< nums.size();i+=3)
        {
            if(nums[i]-nums[i+1]!=0)
                return nums[i];
        }
	
}
