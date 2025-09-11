class Solution {
  public:
    int kokoEat(vector<int>& arr, int k) {
        // Code here
        int st=1;
        
        int maxel=INT_MIN;
        
        int ans=0;
        
        for(int i=0; i<arr.size(); i++){
            if(maxel<arr[i]){
                maxel=arr[i];
               
            };
        };
        int end=maxel;
        while(st<=end){
            int mid=st+(end-st)/2;
            int tsum=0;
            for(int i=0; i<arr.size(); i++){
                tsum+=ceil((double)arr[i]/(double)mid);
            };
            if(tsum<=k){
                ans=mid;
                end=mid-1;
            }
            else{
                st=mid+1;
            }
            
        };
        return ans;
    }
};