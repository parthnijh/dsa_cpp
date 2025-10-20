class Solution {
  public:
    void helper(vector<string>&ans,string current,int n){
        if(current.size()==n){
            ans.push_back(current);
            return;
        }
        helper(ans,current+'0',n);
        helper(ans,current+'1',n);
        
    }
    vector<string> binstr(int n) {
        vector<string> ans;
        string current="";
        helper(ans,current,n);
        return ans;
        // code here
        
    }
};