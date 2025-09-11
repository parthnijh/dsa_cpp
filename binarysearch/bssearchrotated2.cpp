class Solution {
  public:
    bool search(vector<int>& arr, int key) {
        // Code here
        int low=0;
        int high=arr.size()-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(arr[mid]==key){
                return true;
            };
            if(arr[mid]==arr[low] && arr[low]==arr[high]){
                low++;
                high--;
                continue;
            };
            
            if(arr[low]<=arr[mid]){
                if(arr[low]<=key && key<=arr[mid]){
                    high=mid-1;
                }
                else{
                    low=mid+1;
                }
            }
            else{
                if(arr[mid]<=key&& key<=arr[high]){
                    low=mid+1;
                }
                else{
                    high=mid-1;
                };
            };
            
            
        };
        
        return false;
    }
};