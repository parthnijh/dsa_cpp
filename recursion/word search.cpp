class Solution {
public:
    int m,n;
    vector<vector<int>>dir={{1,0},{-1,0},{0,1},{0,-1}};
    bool find(vector<vector<char>>& board,int i,int j,string &word,int idx){
        
        if(idx==word.size())return true;
        if(i<0 || j<0 || i>=m || j>=n || board[i][j]=='$' || board[i][j]!=word[idx])return false;
        char temp=board[i][j];
        board[i][j]='$';
        for(auto d : dir){
            int newi=i+d[0];
            int newj=j+d[1];
            if(find(board,newi,newj,word,idx+1))return true;
        };
        

        board[i][j]=temp;
        return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        m=board.size();
        n=board[0].size();
        unordered_map<char,int> freq;
        for (auto &row : board)
            for (char c : row)
                freq[c]++;

        for (char c : word) {
            if (freq[c]-- == 0)
                return false;
        }
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(board[i][j]==word[0]&& find(board,i,j,word,0))return true;
            };
        };
        return false;
    }
};