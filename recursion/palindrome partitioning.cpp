class Solution {
public:
    bool isPalindrome(string &s,int l,int r){
        while(l<=r){
            if(s[l]!=s[r]) return false;
            l++;
            r--;
        }
        return true;
    }
    
    void helper(string &s,int index,vector<vector<string>>&ans,vector<string>&current){
        
       if(index==s.size()){
        ans.push_back(current);
        return;
       }
       for(int i=index;i<s.size(); i++){
        if(isPalindrome(s,index,i)){
            current.push_back(s.substr(index,i-index+1));
            helper(s,i+1,ans,current);
            current.pop_back();
        };


       };
       return;

       
       
        
       
        
    }
    vector<vector<string>> partition(string s) {
       
        vector<string>current;
        vector<vector<string>> ans;
        helper(s,0,ans,current);
        return ans;
        
    }
};


// User function Template for C++
