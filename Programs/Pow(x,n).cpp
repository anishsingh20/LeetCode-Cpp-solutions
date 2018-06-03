//efficient recursive solution handling all corner cases
double myPow(double x, int n) {
        
        if(n==0)
        {
            return 1.0;
        }
        
        //most important corner case
        if(n == INT_MIN)
        {
            double res = myPow(x,n/2);
            return (res*res);
        }
        
        
        //if power is negetive, then change n to positive
        if(n < 0)
        {
            x = 1/x;
            n = -n;
        }
        
        double res1 = myPow(x,n/2);
        
        
        //if power is even then 
        return (n%2==0) ? res1*res1 : res1*res1*x; 
  }

double myPow(double x, int n) {
        
        double ans = 1;
        long absval = abs((long)n);
        while(absval > 0) {
            if((absval & 1)==1) ans *= x;
            absval >>= 1;
            x *= x;
        }
        return n < 0 ?  1/ans : ans;
    }
    //Log(n) time
