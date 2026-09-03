class Solution {
public:

    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        vector<vector<int>> vis(n, vector<int>(m, 0));
        vector<vector<int>> dist(n, vector<int>(m, 0));
        queue<pair<pair<int,int>,int>> q;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(mat[i][j] == 0) {
                    q.push({{i, j}, 0});
                    vis[i][j] = 1;
                }
            }
        }

        vector<pair<int,int>> dirs = {{-1,0},{0,1},{1,0},{0,-1}};

        while(!q.empty()) {
            int r = q.front().first.first;
            int c = q.front().first.second;
            int cnt = q.front().second;
            q.pop();
            dist[r][c] = cnt;

            for(auto it : dirs) {
                int nr = r + it.first;
                int nc = c + it.second;

                if(nr >= 0 && nr < n &&
                   nc >= 0 && nc < m &&!vis[nr][nc]) {
                    vis[nr][nc] = 1;
                    q.push({{nr, nc}, cnt + 1});
                }
            }
        }

        return dist;
    }
};