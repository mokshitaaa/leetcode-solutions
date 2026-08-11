class Solution {
public:
    bool isPalindrome(int x) {
        long long rev =0;
        int og = x;
        while(x>0){
            int digit = x%10;
            x=x/10;
            rev = rev*10+digit;
        }
        if(rev>INT_MAX || rev<INT_MIN){
            return false;
        }
        if(og==rev){
            return true;
        }
        return false;
    }
};