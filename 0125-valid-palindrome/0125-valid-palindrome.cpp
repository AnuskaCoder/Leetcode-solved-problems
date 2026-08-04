#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
 bool checkPalindrome(int i,int n,string &s) {
        if(i>=n/2){
            return true;
        }
        if(s[i]!=s[n-i-1]){
            return false;
        }
        return checkPalindrome(i+1,n,s);
    }
    bool isPalindrome(string s) {
        string temp = "";

        for (char c : s) {
            if (isalnum(c)) {
                temp += tolower(c);
            }
        }
        return checkPalindrome(0,temp.length(), temp);
    }
};
