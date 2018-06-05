//finding duplicate in a array using a hash table-unordered_set

int findDuplicate(vector<int>& nums) {

unordered_set<int> s;
        
        vector<int>::iterator i;
        
        for(i = nums.begin(); i != nums.end(); i++)
        {
        
            unordered_set<int>::iterator dup = s.find(*i);

            if(dup != s.end())
            {
                return *dup;
                

            }

            s.insert(*i);
            
        }
    }


//Another technique to find duplicate in the array using floyd's cycle detection algorithm-using constant space O(1) and O(n) time
int findDuplicate(vector<int>& nums) {
int slow=0,fast=0,t=0;
        while(true){
            slow = nums[slow];
            fast = nums[nums[fast]];
            if(slow==fast) break;
        }
        while(true){
            slow = nums[slow];
            t = nums[t];
            if(t==slow) break;
        }
        return t;
       
    }
