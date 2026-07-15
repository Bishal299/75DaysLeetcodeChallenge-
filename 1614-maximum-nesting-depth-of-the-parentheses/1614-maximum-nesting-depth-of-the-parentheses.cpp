class Solution {
public:
    int maxDepth(string s) {
        int maxdepth=0;
        int currdepth=0;
        for(char ch:s){
            if(ch=='('){
                currdepth++;
                maxdepth=max(maxdepth,currdepth);
            }else if(ch==')'){
                currdepth--;
            }
        }
        return maxdepth;
    }
};