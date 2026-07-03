
class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        int l=original.size();
        int index=0;
        vector<vector<int>>matrix(m,vector<int>(n));
        if(l==m*n){
         for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                matrix[i][j]=original[index];
                index++;
            }
         }
         return matrix;
        }else{
            return {};
        }
        
    }
};