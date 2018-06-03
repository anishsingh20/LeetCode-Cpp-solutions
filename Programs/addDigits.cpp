int addDigits(int n)
{
int loop = 5; 
        
     int d = 0;
    while(--loop)
    {
        int sum = 0 ;
        
        while(n!=0)
        {
            
            d = (n % 10);
            
            sum += d;
            
            n /= 10;
            
            
        }
        
        n = sum;
        
        if( n>0 && n<10 )
        {
            return n;
            break;
        }
            
            
    }
        return n;  
        
    }
