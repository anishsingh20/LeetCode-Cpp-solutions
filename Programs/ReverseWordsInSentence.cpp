void reverseWords(string &s) {
    
        
        int start = 0;
        int i = 0;
        
        //to remove spaces in the beginning
        while( s[i] == ' ') 
            s.erase(i, 1);//delete 1 char from pos i
        
        
        reverse(s.begin(), s.end());
        
        while( s[i] == ' ') s.erase(i, 1);

        int size = s.size();
        for(i = 0; i < size - 1; i++){
            if( s[i] == ' '){
                if( i == start ){
                    //delete one char from pos i
                    s.erase(i--,1);
                    size--;
                }
                else{
                    reverse(s.begin()+start, s.begin()+i);
                    start = i+1;
                }
            }
        }
        
        reverse(s.begin() + start, s.end());            
        
        
    }
