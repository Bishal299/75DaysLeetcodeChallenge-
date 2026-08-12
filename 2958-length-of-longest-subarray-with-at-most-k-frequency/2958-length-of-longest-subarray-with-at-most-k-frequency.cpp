class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int n=nums.size();
        int count=0;
        unordered_map<int,int>m;
       // m.reserve(n);
        for(int l=0,i=0;i<n;i++){
            auto it=m.find(nums[i]);
            if(it != m.end()){
                it->second ++;

            }else{
                m[nums[i]]=1;
            }
           // m[nums[i]]++;
            while(m[nums[i]]>k){
                m[nums[l]]--;
                l++;
            }
         count=max(count,i-l+1);
       }
       return count;
    }
};