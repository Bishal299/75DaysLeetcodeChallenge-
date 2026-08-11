class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int n=nums.size();
        int sum=nums[0];
        int i;
        for( i=1;i<n;i++){
            if(nums[i]==nums[i-1]+1){
                sum+=nums[i];
            }else{
                break;
            }
        }
        vector<bool> hash(1276,false);
        for(int num: nums){
            hash[num]=true;
        }
        while(hash[sum]){
            sum++;
        }
        return sum;
        //   map<int,int> m;

        // if(find(nums.begin()+i,nums.end(),sum)!=nums.end()){
        //     sum++;
        // }else{
        //     return sum;
        // }
    }
};