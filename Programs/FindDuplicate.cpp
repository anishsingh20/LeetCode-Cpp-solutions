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
