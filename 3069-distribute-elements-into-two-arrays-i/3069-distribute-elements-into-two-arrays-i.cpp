class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int> arr1;
        vector<int> arr2;
         
       arr1.push_back(nums[0]);
       arr2.push_back(nums[1]);
       for(int i=2;i<nums.size();i++){
        if(arr1.back()>arr2.back()){
            arr1.push_back(nums[i]);
        }else{
            arr2.push_back(nums[i]);
         }
       }
   
       int a =arr1.size();
       int b=arr2.size();
      int size=a+b;
      vector<int> ans(size);
       for(int i=0;i<a;i++){
         ans[i]=arr1[i];
       }
       for(int i=0;i<b;i++){
        ans[i+a]=arr2[i];
       }
       return ans;
    }
};