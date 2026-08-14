class Solution {
public:
    int maximumLengthSubstring(string s) {
        int l=s.length();
        
        int maxlength=0;
        int i=0;
         unordered_map<int,int> m;
        m[s[0]]++;
       
        for(int j=1;j<l;j++){
            m[s[j]]++;
           while(m[s[j]]>2){
             m[s[i]]--;
             i++;
           }
          maxlength=max(maxlength,j-i+1);
        }
        return maxlength;
    }
};