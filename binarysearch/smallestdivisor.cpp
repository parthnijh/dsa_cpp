class Solution {
  public:
  
    bool divisor(vector<int>arr,int mid,int k){
        int sum=0;
        for(int i=0; i<arr.size(); i++){
            sum+=ceil((double)arr[i]/(double)mid);
        };
        if(sum<=k) return true;
        return false;
    };
    int smallestDivisor(vector<int>& arr, int k) {
        int max=INT_MIN;
        for(int i=0; i<arr.size(); i++){
            if(max<=arr[i]) max=arr[i];
        };
        int st=1;
        int end=max;
        int ans=-1;
        while(st<=end){
            int mid=st+(end-st)/2;
            if(divisor(arr,mid,k)){
                ans=mid;
                end=mid-1;
            }
            else{
                st=mid+1;
            }
        };
        return ans;
        // Code here
        
    }
};
