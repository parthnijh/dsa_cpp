// User function Template for C++

// N is the number of pairs of parentheses
// Return list of all combinations of balanced parantheses
class Solution {
  public:
    bool isValid(string &curr){
        int count=0;
        for(char ch : curr){
            if(ch=='(') count++;
            else if(ch==')') count--;
            if(count<0) return false;
        };
        return count==0;
    }
    void helper(vector<string>&ans,string curr,int n){
       
        if(curr.size()==n){
            if(isValid(curr)) ans.push_back(curr);
            
            return;
        }
        helper(ans,curr+'(',n);
        helper(ans,curr+')',n);
        
        
    }
    vector<string> generateParentheses(int n) {
        string curr="";
        vector<string>ans;
        helper(ans,curr,n);
        return ans;
        // code here
        
    }
};
class Solution {
public:
    void helper(vector<string>&ans,string curr,int open,int close,int n){
        if(curr.size()==2*n){
            ans.push_back(curr);

            return;
        }
        if(open<n){
            helper(ans,curr+'(',open+1,close,n);
        }
        if(close<open){
            helper(ans,curr+')',open,close+1,n);
        }


    }
    vector<string> generateParenthesis(int n) {
        string curr="";
        vector<string>ans;
        int open=0;
        int close=0;
        helper(ans,curr,open,close,n);
        return ans;
        
    }
};