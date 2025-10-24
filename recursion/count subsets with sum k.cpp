class Solution {
  public:
    const int MOD = 1e9 + 7; 
    void helper(vector<int>&arr,int index,int sum,vector<int> &current,int &count,int target){
        if(index==arr.size()){
            if(sum==target)count = (count + 1) % MOD;
;
            return;
        }
        current.push_back(arr[index]);
        helper(arr,index+1,sum+arr[index],current,count,target);
       
        current.pop_back();
        helper(arr,index+1,sum,current,count,target);
    }
    int perfectSum(vector<int>& arr, int target) {
        vector<int>current;
        int count=0;
        helper(arr,0,0,current,count,target);
        return count;
        // code here
        
    }
};