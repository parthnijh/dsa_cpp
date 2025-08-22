class Solution {
  public:
    int missingNumber(vector<int> &arr) {
        // code here
        unordered_map<int,int>mpp;
        int max=INT_MIN;
        for(int i=0; i<arr.size(); i++){
            if(arr[i]>=0){
                mpp[arr[i]]=i;
            };
        };

        for(int i=1; i<=arr.size(); i++){
            if(mpp.find(i)==mpp.end()){
                return i;
            };
        };
        if(arr.size()==1){
            return arr[0]+1;
        }

        for(int i=0; i<arr.size(); i++){
            if(arr[i]>max){
                max=arr[i];
            };
        };

        return max+1;
        
    }
};