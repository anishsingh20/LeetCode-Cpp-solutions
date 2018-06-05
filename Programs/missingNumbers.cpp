//C program to find the missing number using qsort function
int compare_ints (const int *a, const int *b)
{
  return (int) (*a - *b);
}

int missingNumber(int* nums, int numsSize) {
    
    //sorting the array
    qsort (nums, numsSize, sizeof (int),compare_ints);
    
    int i = 0;
    for(i = 0 ; i <= numsSize ; i++)
            if(i!=nums[i]) break;
           
            
            
        
    
        return i;
}


int missingNumber(vector<int>& nums) {
        
        
        
        vector<int>::iterator it;

        for(int i = 0 ; i <= nums.size() ; i++)
        {
            it = find(nums.begin(),nums.end(),i);
            
            if( it != nums.end())
            {
                continue;
            }
            else
            {
                return i;
                break;
            }
        }
        
        
        
       
        
    }
