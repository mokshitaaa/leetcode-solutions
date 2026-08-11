class Solution {
public:
    int reverse(long long x) {
        bool flag = false;
        if(x<0){
            flag = true;
        }
        x=abs(x);
        long long rev =0;
        while(x>0){
           long long digit = x%10;
           x=x/10;
           rev=rev*10+digit;
        }
        if(rev>INT_MAX || rev<INT_MIN){
            return 0;
        }
        if(flag){
            return rev*-1;
        }
        return rev;
    }
};