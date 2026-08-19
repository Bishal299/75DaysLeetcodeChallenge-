class Solution {
public:
    void sortColors(vector<int>& nums) {
        int l=nums.size();
        map<int,int>m;
        for(int i=0;i<l;i++){
             m[nums[i]]++;
        }
        int i;
        for(int j=0;j<3;j++){
        while(m[j]>0){
            nums[i]=j;
            i++;
            m[j]--;
        }
        }
    
    }
};