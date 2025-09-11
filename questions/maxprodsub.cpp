class Solution {
  public:
    int maxProduct(vector<int> &arr) {
        // code here
        int prefix=1;
        int suffix=1;
        int ans=INT_MIN;
        for(int i=0; i<arr.size(); i++){
            if(prefix==0) prefix=1;
            if(suffix==0) suffix=1;
            prefix*=arr[i];
            suffix*=arr[arr.size()-i-1];
            ans=max(ans,max(prefix,suffix));
            
        };
        return ans;
    }
};