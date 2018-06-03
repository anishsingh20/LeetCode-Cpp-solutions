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
