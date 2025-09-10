class Solution {
  public:
    int nthRoot(int n, int m) {
        // Code here
        int st=1;
        int end=m;
        int ans=-1;
        while(st<=end){
            long long mid=st+(end-st)/2;
            if(pow(mid,n)==m){
                ans=mid;
                return ans;
                
            }
            else if(pow(mid,n)<m){
                st=mid+1;
            }
            else{
                end=mid-1;
            }
        };
        return ans;
    }
};