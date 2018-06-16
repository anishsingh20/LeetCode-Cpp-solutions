//program to shift all zeroes to the end of an array

//Method-1 Using STL replace_if()

void moveZeroes(vector<int>& nums) {
        
      
      replace_if(remove(nums.begin(),nums.end(),0),nums.end(),[](int x){ return x!=0; },0);
    
     
           
    }
