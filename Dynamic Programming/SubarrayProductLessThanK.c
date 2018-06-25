//C solution which beats 100% submissions.
int numSubarrayProductLessThanK(int* nums, int numsSize, int k) {
    
     
        int count = 0 ;
        int pro = 1;
        
        for(int i = 0,j = 0 ; j  < numsSize ; j++)
        {
            pro *= nums[j];
            
            //if product of subarray becomes greater than k, we reduce size of max-product < k window
            while(i<=j && pro >= k)
                pro /= nums[i++];
            
            count += (j-i+1);
        }
        
        return count;
    
}
//T(n) = O(n) and constant space.
