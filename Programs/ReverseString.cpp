string reverseString(string s) {
        
        int i = 0 ; 
        int j  = s.size()-1;
      
        while(i<j)
        {
            swap(s[i++],s[j--]);
           
        }
        
       
        return s;
        
    }
    
    //reversing a string which beats 97 % of cpp solutions
