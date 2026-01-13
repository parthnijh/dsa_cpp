class Solution {
public:

   
    bool isValid(vector<vector<char>>& board,int row,int col,char i){
       for(int r=0; r<board.size(); r++){
            if(board[row][r]==i)return false;
       };
       for(int c=0; c<board.size(); c++){
        if(board[c][col]==i)return false;
       };
        int startr=(row/3)*3;
        int startc=(col/3)*3;
       for(int r=startr; r<startr+3;r++){
        for(int c=startc;c<startc+3;c++){
            if(board[r][c]==i)return false;
        };
       };
       return true;
    };

    bool rec(vector<vector<char>>& board){
       
        for(int row=0; row<board.size();row++){
            
            for(int col=0; col<board.size(); col++){
                if(board[row][col]=='.'){
                   for(char i='1'; i<='9'; i++){
                    
                    if(isValid(board,row,col,i)){
                        board[row][col]=i;
                        if(rec(board))return true;
                        board[row][col]='.';
                        };
                    };
                    return false;
                   };
                };
            };
           return true;
    };
        























    
    
    void solveSudoku(vector<vector<char>>& board) {
        rec(board);
    }
};