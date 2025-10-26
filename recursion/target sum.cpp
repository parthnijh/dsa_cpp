class Solution {
  public:
    void helper(vector<vector<int>>&ans,vector<int>&arr,int target,int &sum,vector<int>&current,int index){
        if(sum==target){
            ans.push_back(current);
            return;
        }
        
        if(sum>target || index==arr.size()) return;
        current.push_back(arr[index]);
        sum+=arr[index];
        helper(ans,arr,target,sum,current,index);
        current.pop_back();
        sum-=arr[index];
        helper(ans,arr,target,sum,current,index+1);
        
    }
    vector<vector<int>> targetSumComb(vector<int> &arr, int target) {
        // code here
        vector<int>current;
        int sum=0;
        vector<vector<int>>ans;
        helper(ans,arr,target,sum,current,0);
        return ans;
        
    }
};