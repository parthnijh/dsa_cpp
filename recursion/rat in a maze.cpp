class Solution {
  public:
    
    
    
    void solve(vector<vector<int>>& maze, string &path,vector<string>&result,int row,int col,int n){
        
        vector<char> move = {'D','L','R','U'};
        vector<vector<int>> dir = {{1,0},{0,-1},{0,1},{-1,0}};
        

        if(row>=n || col>=n || row<0 || col<0)return;
        if(maze[row][col]!=1)return;
        
        if(row==n-1 && col==n-1){
            result.push_back(path);
            return;
        }
        int el=maze[row][col];
        maze[row][col]=-1;
        
        for(int i=0; i<dir.size(); i++){
            int newi=row+dir[i][0];
            int newj=col+dir[i][1];
           
           
            path.push_back(move[i]);
            solve(maze,path,result,newi,newj,n);
           
            path.pop_back();
        }
        
        maze[row][col]=el;
        
    
        return;
        
    }
    vector<string> ratInMaze(vector<vector<int>>& maze) {
        // code here
        vector<string>result;
        
        string path;
        int n=maze[0].size();
        if(maze[0][0] == 0) return {};

        solve(maze,path,result,0,0,n);
        return result;
    }
};