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
