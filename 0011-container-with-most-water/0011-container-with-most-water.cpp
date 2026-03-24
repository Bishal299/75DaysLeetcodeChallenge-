class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0;
        int r=height.size()-1;
        
        int maxarea=0;
        
        while(l<r){
          int h=min(height[l],height[r]);
          int w=r-l;
          int area = h*w;
          maxarea=max(maxarea,area);
          if(height[l]>height[r]){
            r--;
          }else{
            l++;
          }
        }
        return maxarea;
    }
};