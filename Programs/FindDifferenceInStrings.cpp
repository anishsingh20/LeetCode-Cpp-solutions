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


//method 2- Similar to Finding the only single occuring number in an array
//concatenating both the strings, sorting them will make the same chars next to each other.The 2 same chars will occupy the adjacent locations, and the differenc between the is 0.
//if we encounter any such char which is not equal to its next intermediate char, then it is the odd one out.
char findTheDifference(string s, string t) {
      
        string res = (s+t);//concatenating both strings into 1
        
        // int size = res.size()-1;
        
         sort(res.begin(),res.end());
        
//         int ans = 0;
        
//         for(auto a : res)
//         {
//             ans ^= a;
//         }
//         return (char)ans;
            int i=0;
            for(; i < res.size()-1 ; i+=2)
            {
                if(res[i]-res[i+1] != 0)
                {
                    return res[i];
                    
                }
            }
        
        return res[i];
    
        
    }
