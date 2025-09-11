class Solution {
  public:
    long subarrayXor(vector<int> &arr, int k) {
        // code here
        unordered_map<int,int>mpp;
        int cnt=0;
        mpp[0]=1;
        int x=0;
        int exor=0;
        for(int i=0; i<arr.size(); i++){
            exor^=arr[i];
            x=exor^k;
            cnt+=mpp[x];
            mpp[exor]++;
            
        };
        
        return cnt;
    }
};
//count subarray with exor k