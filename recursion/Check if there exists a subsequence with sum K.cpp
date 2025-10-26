class Solution {
  public:
    bool helper(int n,vector<int>&arr,int k,int sum,int index){
        if(index==n){
            if(sum==k){
                return true;
            }
            return false;
        }
        
        if(helper(n,arr,k,sum+arr[index],index+1)) return true;
       
        if(helper(n,arr,k,sum,index+1))return true;
        return false;
    }
    bool checkSubsequenceSum(int n, vector<int>& arr, int k) {
        // Code here
        return helper(n,arr,k,0,0);
    }
};