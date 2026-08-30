class Solution {
public:
   void bfs(int row,int col,vector<vector<int>> &vis,vector<vector<char>>& grid){
    vis[row][col]=1;
    queue<pair<int,int>>q;
    q.push({row,col});

    int n=grid.size();
    int m=grid[0].size();
     vector<pair<int,int>> directions={{1,0},{-1,0},{0,1},{0,-1}};
    while(!q.empty()){
        int vrow=q.front().first;
        int vcol=q.front().second;
         q.pop();
        for(auto& dir:directions){
            int nvrow=vrow+dir.first;
            int nvcol=vcol+dir.second;
            if(nvrow>=0 && nvrow<n && nvcol>=0 && 
            nvcol<m && grid[nvrow][nvcol]=='1'
            && !vis[nvrow][nvcol]){
                vis[nvrow][nvcol]=1;
                q.push({nvrow,nvcol});
            }
        }
         

    }
   }
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));
        int cnt=0;

        for(int row=0;row<n;row++){
            for(int col=0;col<m;col++){
                if(!vis[row][col] && grid[row][col]=='1'){
                    cnt++;
                    bfs(row,col,vis,grid);
                }
            }
        }
        return cnt;
    }
};