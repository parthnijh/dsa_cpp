class Solution {
public:
    void helper(int k ,int n ,vector<vector<int>> &ans,vector<int>&current,vector<int> numbers,int sum,int index){
       
        if(current.size()==k){
           if(sum==n){
            ans.push_back(current);
           };
          
           return;
        };
        if(sum>n || index>=numbers.size()) return;
        
        current.push_back(numbers[index]);
        sum+=numbers[index];
        cout<<sum;
       
        helper(k,n,ans,current,numbers,sum,index+1);
        current.pop_back();
        sum-=numbers[index];
        helper(k,n,ans,current,numbers,sum,index+1);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int>current;
        vector<int>numbers={1,2,3,4,5,6,7,8,9};
       
        helper(k,n,ans,current,numbers,0,0);
        return ans;
    }
};