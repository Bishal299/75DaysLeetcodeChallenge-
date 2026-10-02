class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        sort(hours.begin(),hours.end());
        // int l=0;
        // int r=hours.size()-1;
        // while(l<=r){
        //     int mid=l+(r-l) /2;
        //     if(mid>=target){
        //         return r-mid+1;
        //     }
        //     l++;
        //     r--;
        // }
        for(int i=0;i<hours.size();i++){
            if(hours[i]>=target){
                return hours.size()-i;
            }
        }
        return 0;
    }

};