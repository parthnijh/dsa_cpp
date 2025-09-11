
class Solution {
  public:
    vector<vector<int>> triplets(vector<int> &arr) {
        vector<vector<int>>ans;
        // code here
        sort(arr.begin(),arr.end());
        for(int i=0; i<arr.size(); i++){
            
            if(i>0 && arr[i]==arr[i-1]) continue;
            int j=i+1;
            int k=arr.size()-1;
            while(j<k){
                int sum=arr[i]+arr[j]+arr[k];
                if(sum<0){
                    j++;
                    
                }
                else if(sum>0){
                    k--;
                }
                
                else{
                    vector<int>temp={arr[i],arr[j],arr[k]};
                    ans.push_back(temp);
                    j++;
                    k--;
                    while(j<k&& arr[j]==arr[j-1]) j++;
                    while(j<k && arr[k]==arr[k+1]) k--;
                    
                };
            };
            
            
        };
        return ans;
    }
};


/* taking  pointers then just updating i j k ,
changing i when prev val doesnt equal current val,
similar for j and k additionally change j when sum<o as we need to increase it
change k when sum>0 as we need to decrease,also change them when prev val of both equal the current and finally when 
the triplet is found */
