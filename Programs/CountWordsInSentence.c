//program to count number of words(contigious) in a sentence-where a segment is defined to be a contiguous sequence of non-space characters

int countSegments(char* s) {
    
    int countWords = 0;
       int len = 0; 
       int size = strlen(s); 
        for(int i = 0 ; i < size ; i++)
        {
            //when hitting space char, reset length to 0;
            if(s[i] == ' ')
                len = 0;
            
            //This means, let's count the number of letters in this word and if we just started with the first letter of a new word, then                   let's increment the number of words we have so far.
            else if( ++len == 1 ) 
                countWords++;
               
        }
        
        return countWords;
        
    
}
//beats 100% of C submissions. T(n) = O(n)
