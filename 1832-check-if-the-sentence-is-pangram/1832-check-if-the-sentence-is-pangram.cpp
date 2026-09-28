class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int>arr(26,0);
        for(int i=0;i<sentence.size();i++){
            arr[sentence[i]-'a']++;
        }
        for(int a:arr){
            if(a==0){
                return false;
            }
        }
        return true;
    }
};