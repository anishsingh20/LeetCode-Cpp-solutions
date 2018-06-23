//solution using DP- handles all cases-negetive elements in array too-
int maxSubArray(vector<int>& nums) {

        int size = nums.size();
        int dp[size];
        
        
        //not for all negetive items in array eg-[-2,-1]
        // if(nums[0] > 0) dp[0] = nums[0];
        // else dp[0] = 0;
        
        dp[0] = nums[0];
        
        int resSum = INT_MIN;
        
        if(size==1) return nums[0];

        for(int i = 1; i < nums.size();i++)
        {
//             if(nums[i] + dp[i-1] > 0)
//                 dp[i] = dp[i-1] + nums[i];
            
//             else dp[i] = 0;
            dp[i] = nums[i] + (dp[i-1] > 0 ? dp[i-1] : 0);
            
        }
        
        
        for(int i = 0 ; i < size ; i++)
        {

            if(dp[i]  > resSum)
                resSum = dp[i];
        }

        return resSum;
      
        
        
}



//simple iterative O(n) solution to find max Sum of continious subarray
    int maxSubArray(vector<int>& nums) {
        
        int curSum = nums[0]; 
        int resSum = nums[0];
        
        for(int i = 1 ; i < nums.size();i++)
        {
            curSum = max(nums[i],nums[i]+curSum);
            resSum = max(resSum,curSum);
        }
       
        return resSum;
    }


//Divide and conquer solution to find maximum sum subarray-T(n) = O(nlogn), space = O(n) or height of recursion tree
int Max(int a,int b , int c)
{
    if(a >= b && a >= c) return a;
    
    else if(b >= a && b >= c) return b;
    
    else return c;
}   
    
    
int maxSubArrayDnQ(vector<int>&nums,int start,int end)
{
     int leftBorderSum = 0,rightBorderSum = 0 , maxLeftBorderSum = INT_MIN , maxRightborderSum = INT_MIN;
        
        //base case
        if(start==end)
        {
            return nums[start];
        }        
        
        
        int mid = start + (end-start)/2;
        
        int leftSum = maxSubArrayDnQ(nums,start,mid);
        int rightSum = maxSubArrayDnQ(nums,mid+1,end);

        for(int i = mid ; i >= start ; i--)
        {
            leftBorderSum += nums[i];
            if(leftBorderSum > maxLeftBorderSum)
                    maxLeftBorderSum = leftBorderSum;
        }
        
        
        for(int j = mid+1 ; j <= end ; j++)
        {
            rightBorderSum += nums[j];
            
            if(rightBorderSum > maxRightborderSum )
                    maxRightborderSum = rightBorderSum;
        }
        
        return Max(leftSum,rightSum, (maxLeftBorderSum + maxRightborderSum) );
}
    
    
    int maxSubArray(vector<int>& nums) {
        
        int start = 0 ;
        int end = nums.size();
         
        return maxSubArrayDnQ(nums,start,end-1) ;
       
   }//inefficient approach
