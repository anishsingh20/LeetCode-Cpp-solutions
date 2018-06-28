//method-1 Using a hash Map-Using sliding window concept
int lengthOfLongestSubstring(string s) {
        
       unordered_set<char>a;
        
       int i = 0,j = 0 ;
        int len = 0;
        int n = s.size();
        while(i < n && j < n)
        {
            //if set does not containes a char, we simply insert it
            if(a.find(s[j]) == a.end())
            {
                a.insert(s[j++]);
                
                len = max(len,j-i);
            }
            
            //if already exists, then remove that item from set
            else
            {
                a.erase(s[i++]);
            }
                
        }
        
        return len;
        
    }
