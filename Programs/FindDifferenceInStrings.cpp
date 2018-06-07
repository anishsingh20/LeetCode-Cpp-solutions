//most optimal solution to find the different char in both strings using XOR ops.
//we can use XOR ops to find the different element in an array. In this case we simply typecast the XORed result to c char.

char findTheDifference(string s, string t) {
      
        string res = (s+t);//concatenating both strings into 1
        
        // int size = res.size()-1;
        
        // sort(res.begin(),res.end());
        
        int ans = 0;
        
        for(auto a : res)
        {
            ans ^= a;
        }
        return (char)ans;
        
    }
