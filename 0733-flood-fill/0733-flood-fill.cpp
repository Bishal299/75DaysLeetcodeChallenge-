class Solution {
public:
     void dfs(int sr,int sc,vector<vector<int>>&ans,vector<vector<int>>&image,int initcolor,int color){
        ans[sr][sc]=color;
        vector<pair<int,int>> directions={{1,0},{-1,0},{0,1},{0,-1}};
        int n=image.size();
        int m=image[0].size();

        for(int i=0;i<4;i++){
            int nrow=sr+directions[i].first;
            int ncol=sc+directions[i].second;
            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m 
            && image[nrow][ncol]==initcolor && ans[nrow][ncol]!=color){
                dfs(nrow,ncol,ans,image,initcolor,color);
            }
        }
        
     }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        vector<vector<int>>ans= image;
        int initcolor=image[sr][sc];
        dfs(sr,sc,ans,image,initcolor,color);
        return ans;
    }
};