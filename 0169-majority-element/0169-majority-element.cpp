#include <unordered_map>
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int l=nums.size();
        

       unordered_map<int,int> count;
       for(int x: nums){
        count[x]++;
         if(count[x]>l/2){
            return x;
         }
       }

       return -1;
    }
};