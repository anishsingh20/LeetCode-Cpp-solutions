//optimal solution to reverse vowels of a string in cpp
string reverseVowels(string s) {
        int i = 0 ;
        int j = s.size()-1;
        
        
        
        while(i<j)
        {
            if(s[i]=='a' || s[i]=='e' || s[i] == 'i' || s[i]=='o' || s[i]=='u' || 
               s[i]=='A' || s[i]=='E' || s[i] == 'I' || s[i]=='O' || s[i]=='U')
            {
                if(s[j]=='a' || s[j]=='e' || s[j] == 'i' || s[j]=='o' || s[j]=='u' || 
                   s[j]=='A' || s[j]=='E' || s[j] == 'I' || s[j]=='O' || s[j]=='U')
                        swap(s[i++],s[j--]);
                    
                
                else j--;
               
            }
            
            else i++;
            
        }
        
        return s;
    }


//method-2 using find_first_of()  string function.

 string reverseVowels(string s) {
        
         int i = 0, j = s.size() - 1;
        while (i < j) {
            i = s.find_first_of("aeiouAEIOU", i);
            j = s.find_last_of("aeiouAEIOU", j);
            if (i < j) {
                swap(s[i++], s[j--]);
            }
        }
        return s;
        
        
    }


//Method-3

 bool isVowel(char c)
    {
        switch(c) 
        {
            case 'a' :
            case 'e' :
            case 'i' :
            case 'o' :
            case 'u' :
            case 'A' :
            case 'E' :
            case 'I' :
            case 'O' :
            case 'U' :
                return true;
        }
        
        return false;
    }

string reverseVowels(string s) {
        
     int i = 0, j = s.size() - 1;
       
     while(i < j)
     {
         while(i < j  && !isVowel(s[i]))
             i++;
         
         while(i<j && !isVowel(s[j]))
             j--;
         
         swap(s[i++],s[j--]);
     }
        
        
    return s;
        
    }
