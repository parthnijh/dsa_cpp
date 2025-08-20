

class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(vector<int>& arr) {
        // Code here
        vector<int>leaders;
        vector<int>ans;
        int max=INT_MIN;
        for(int i=arr.size()-1; i>=0; i--){
            if(arr[i]>=max){
                max=arr[i];
                leaders.push_back(arr[i]);
            };
            
                
        };
        for(int i=leaders.size()-1; i>=0; i--){
            ans.push_back(leaders[i]);
        }
        return ans;
        
    }
};