//given an array, where each element occurs 3 times, find the one which occurs only once.

//Solution1-Using bit manipulation-XOR and other bitwise ops-
int singleNumber(vector<int>& nums) {
int a = 0, b = 0;
		for (int i : nums) {
			b = (b ^ i) & ~a;
			a = (a ^ i) & ~b;
		}
		return b;
    }
