class Solution {
public:
    vector<vector<string>> result;
    unordered_set<int>cols;
    unordered_set<int>diag;
    unordered_set<int>antidiag;
        
    void solve(vector<string>&board,int row,int N){
        if(row>=N){
            result.push_back(board);
            return;
        };
        for(int col=0; col<N; col++){
            int diagC=row+col;
            int antidiagC=row-col;

            if(cols.find(col)!=cols.end() || diag.find(diagC)!=diag.end()||antidiag.find(antidiagC)!=antidiag.end())continue;
            cols.insert(col);
            diag.insert(diagC);
            antidiag.insert(antidiagC);
            board[row][col]='Q';
            solve(board,row+1,N);
            cols.erase(col);
            diag.erase(diagC);
            antidiag.erase(antidiagC);

            board[row][col]='.';
        };
        return;


    }
    vector<vector<string>> solveNQueens(int n) {
        
        vector<string> board(n,string(n,'.'));
        
        solve(board,0,n);
        return result;
    }
};