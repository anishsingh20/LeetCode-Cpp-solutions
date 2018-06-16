//program to shift all zeroes to the end of an array

//Method-1 Using STL replace_if()

void moveZeroes(vector<int>& nums) {
        
      
      replace_if(remove(nums.begin(),nums.end(),0),nums.end(),[](int x){ return x!=0; },0);
    
     
           
    }


//Method-3 Using 2 loops and comapring each item- Inefficient consumes O(n*n) time
for(int i = 0 ;  i < nums.size() ; ++i)
        {
            for(int j = i+1 ; j < nums.size(); j++)
            {
                if(nums[i]==0 && nums[j]!= 0)
                {
                    swap(nums[i],nums[j]);
                }
            }
        }
