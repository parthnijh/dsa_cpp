class Solution {
  public:
  
    bool isposs(vector<vector<int>> &graph,vector<int>&color,int m,int v,int index,int col){
        for(int i=0; i<v; i++){
            if(graph[index][i]){
                if(color[i]==col)return false; // dekh rhe if a neighbour is alr assigned the same color
            }
        };
        return true;
    };
  
    bool rec(vector<vector<int>> &graph,vector<int>&color,int m,int v,int index){
        if(index>=v)return true;
        for(int col=1; col<=m; col++){
            if(isposs(graph,color,m,v,index,col)){ // call
                color[index]=col; // try
                if(rec(graph,color,m,v,index+1))return true; // explore and if found return
                color[index]=0;// backtrack
            };
        };
        
        return false;
    };
    bool graphColoring(int v, vector<vector<int>> &edges, int m) {
        vector<int>color(v,0);
        vector<vector<int>> graph(v, vector<int>(v, 0));
        for(auto &e : edges) {
            int u = e[0], v = e[1];
            graph[u][v] = 1;
            graph[v][u] = 1;
        }// adjancy matrix
        return rec(graph,color,m,v,0);
        
        // code here
      
    };
};