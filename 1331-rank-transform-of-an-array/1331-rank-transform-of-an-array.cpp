class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n=arr.size();
       
        vector<int> darr=arr;
        sort(darr.begin(),darr.end());
        map<int,int> mp;
        int rank=1;
       
        for(int x: darr){
            if(mp.find(x)==mp.end()){
                mp[x]=rank;
                rank++;
            }

        }
        for(int i=0;i<n;i++){
            arr[i]=mp[arr[i]];
        }
        return arr;
    }
};