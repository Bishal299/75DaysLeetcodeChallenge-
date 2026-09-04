class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        
        int cnt=0;
        int l=0;
        while(l<nums.size()){
            int mx=INT_MIN;
           int mn=INT_MAX;
          for(int i=0;i<=l;i++){
             mx=max(mx,nums[i]);
          }
          for(int j=nums.size()-1;j>=l;j--){
            mn=min(mn,nums[j]);
          }
          if(mx-mn<=k){
            return l;
          }
          l++;
        }
        return -1;
    }
};