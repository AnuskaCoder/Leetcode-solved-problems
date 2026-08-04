class Solution {
public:
    bool isPalindrome(int n) {
    int org=n;
    int revn=0;
    if (n < 0)
            return false;
    while(n!=0){
        int lastdigit=n%10;
        n=n/10;
        if (revn > INT_MAX / 10 || (revn == INT_MAX / 10 && lastdigit > 7))
    return false;   // or return 0 for Reverse Integer problem

if (revn < INT_MIN / 10 || (revn == INT_MIN / 10 && lastdigit < -8))
    return false;
        revn=(revn*10)+lastdigit;
    }
    if(revn==org){
        return true;
    }
    else{
        return false;
    }
    }
};