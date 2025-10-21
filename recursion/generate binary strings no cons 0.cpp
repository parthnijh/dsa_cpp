class Solution {
public:
    void helper(vector<string>&ans,string curr,int n){
        
        
        if(curr.size()==n){
            ans.push_back(curr);
            return;
        }
        if(curr.size()==0) helper(ans,curr+'0',n);
        else if(curr.size()>=1 && curr[curr.size()-1]!='0'){
            helper(ans,curr+'0',n);
        };
        
        
        helper(ans,curr+'1',n);
        
    }
    vector<string> validStrings(int n) {
        string curr="";
        vector<string>ans;
        int i=0;
        helper(ans,curr,n);
        return ans;

        
    }
};