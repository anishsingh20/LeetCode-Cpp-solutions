bool isPalindrome(int x) {
        
       long rev = 0;
        int temp = abs(x);
        
        while(temp)
        {
            rev = rev * 10 + (temp%10);
            temp /= 10;
        }
        
        return rev == x;
        
    }
    //program to check if a number is palndrome-most optimal solution, handling negetive test cases
