
// for a single row or nth row
class Solution {
  public:
    
    
    
    vector<int> nthRowOfPascalTriangle(int n) {
        vector<int> ans={};
        int num=1;
        ans.push_back(1);
        if(n==1) return {1};
        for(int i=1; i<n-1; i++){
            num=num*(n-i);
            num=num/i;
            ans.push_back(num);
            
            
        };
        ans.push_back(1);
        
        return ans;
        // code here
        
    }
};
//for all rows
class Solution {
public:
    vector<int>genrows(int n){
        vector<int>ans;
        int num=1;
        if(n==1) return {1};
        ans.push_back(1);
        for(int i=1; i<n; i++){
            num=num*(n-i);
            num=num/i;
            ans.push_back(num);

        };
       
        

        return ans;
    }
    vector<vector<int>> generate(int numRows) {
         vector<vector<int>>ans;
        for(int i=1; i<=numRows; i++){
            ans.push_back(genrows(i));
        };
        return ans;
        
    }
};