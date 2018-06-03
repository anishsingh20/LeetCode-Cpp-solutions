bool isHappy(int n) {
       
        
        
        int d = 0;
          
        if(n<0)
            return false;
  
        int  loop = 20;//to prevernt looping infinitely, if input is not a happy number
        
        while(--loop)
        {
            
         
           int sum = 0;
            
            while(n)
            {
                d = n % 10;
                sum += (d*d);
                n  = n/10;
             }
            
            //  re-setting n to the sum of square of digits
            n = sum;    
                   
            //if 1 occurs , then break out of the loop
            if(n==1)
            {
                return true;
                break;
            }
         }
        
         return false;
        
 }
        
