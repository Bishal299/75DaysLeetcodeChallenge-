class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int l=nums.size();
        int curr=0;
        int maxcount=0;
        for(int i=0;i<l;i++){
            if(nums[i]==1){
                curr++;
                maxcount=max(curr,maxcount);
            }else{
                curr=0;
            }
        }
        return maxcount;
        
    }
};