class Solution {
public:
    int countDigits(int num) {
        int x=num;
        int i=0;
        while(num>0){
            int d=num%10;
            if(x%d==0){
                i++;
            }
            num=num/10;
        }
        return i;
    }
};