class Solution {
public:
    void helper(vector<vector<int>>&ans,vector<int>&current,int index,vector<int>nums){
        if(index==nums.size()){
            ans.push_back(current);
            return;
        }
        //choice 1 ki lenge is number ko
        current.push_back(nums[index]);
        helper(ans,current,index+1,nums);
        current.pop_back();// undo kro htado number ko
        helper(ans,current,index+1,nums);

        
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        int index=0;
        vector<int>current;
        
        helper(ans,current,index,nums);
        
        return ans;

        
    }
};