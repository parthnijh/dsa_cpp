class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        /*
        1. whats the index where the number is smaller than the number   ahead of it
        
        */
        int index=-1;

        for(int i=nums.size()-2;i>=0; i--){
            if(nums[i]<nums[i+1]){
                index=i;
                break;
            };
        };

        if(index==-1){
            reverse(nums.begin(),nums.end());
        }
         // if in desc order just reverse for next permutation
        //2.find number greater than the first number but the smalled out of all present
        else{
            for(int i=nums.size()-1; i>index; i--){
                if(nums[i]>nums[index]){
                    
                    swap(nums[i],nums[index]);
                    break;
                };
            };

        //3 simply reverse the remaining portion
            reverse(nums.begin()+index+1,nums.end());
        };

        
    }
};