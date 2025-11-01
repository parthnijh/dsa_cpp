class Solution {
  public:
    void helper(vector<int>&arr,string current,vector <string>&ans,unordered_map<int,string>&keypad,int index){
        if(index>=arr.size()){
            ans.push_back(current);
            return;
        };
        
        string s=keypad[arr[index]];
        if (s.empty()) {
        helper(arr, current, ans, keypad, index + 1);
        return;
        };
        for(int i=0; i<s.length();i++){
            current.push_back(s[i]);
            helper(arr,current,ans,keypad,index+1);
            current.pop_back();
            
        }
      
       
        
    }
    vector<string> possibleWords(vector<int> &arr) {
        
        // code here
        vector<string>ans;
        unordered_map<int, string> keypad = {
            {1,""},
            {2, "abc"}, {3, "def"}, {4, "ghi"}, {5, "jkl"},
            {6, "mno"}, {7, "pqrs"}, {8, "tuv"}, {9, "wxyz"}
        };
        helper(arr,"",ans,keypad,0);
        return ans;
    }
};