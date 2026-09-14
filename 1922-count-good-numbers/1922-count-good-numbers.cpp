class Solution {
public:
 int m=1e9+7;
 long long power(long long b,long long e){
    if (e == 0){
        return 1;
    }
    long long half=power(b,e/2);
    half=(half*half)%m;
    if(e%2==1){
        half=(half*b)%m;
    }

    return half;
 }
    int countGoodNumbers(long long n) {
     
         long long pairs = n / 2;

        long long ans = power(20, pairs);

        if (n % 2 == 1)
            ans = (ans * 5) % m;

        return ans;
    }
};