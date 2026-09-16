class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        int r=0;int c=m-1;
        // int cell=matrix[r][c];
        while(r<n && c>=0){
            int cell=matrix[r][c];
            if(cell==target){
                return true;
            }else if(cell<target){
                r++;
            }else{
                c--;
            }
        }
        return false;
    }
};