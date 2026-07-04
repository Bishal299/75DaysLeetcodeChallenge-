class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int l=nums.size();

        int actsum=(l*(l+1))/2;

        int predsum=0;
        
        for(int i=0;i<l;i++){
            predsum+=nums[i];
        }

        return actsum-predsum;
    }
};