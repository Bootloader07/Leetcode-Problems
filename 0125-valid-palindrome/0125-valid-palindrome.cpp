class Solution {
public:
    bool isPalindrome(string s) {
    string s2;
    for(char x : s){
        if(isalpha(x) || isdigit(x)){
            x = tolower(x);
            s2.push_back(x);
        }
    }
    string s3;
    for(int i = s2.length()-1;i>=0;i--){
        s3.push_back(s2[i]);
    }
    if(s2==s3){
        return true;
    }
    return false;
    }
};