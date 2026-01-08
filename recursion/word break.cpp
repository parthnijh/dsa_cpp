class Solution {
public:
    unordered_set<string>hashset;
    bool solve(int index,string s){
        if(index==s.size())return true;
        
        for(int i=index; i<s.size(); i++){
            string temp=s.substr(index,i-index+1);
            if(hashset.find(temp)!=hashset.end()&&solve(i+1,s)){
                return true;
            }
            
        };
        return false;

    };
    bool wordBreak(string s, vector<string>& wordDict) {
        for(auto word : wordDict){
            hashset.insert(word);
        }
        return solve(0,s);
        
    };
};