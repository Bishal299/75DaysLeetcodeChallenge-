class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(string s:words){

           string b=s;
           reverse(s.begin(),s.end());
           if(s==b){
            return b;
           }
        }
        return "";
    }
};