class Solution {
public:
    bool isPalindrome(string s) {
        string str;
        for(char x : s){
            if(isalpha(x) || isdigit(x)){
                str.push_back(tolower(x));
            }
        }
        string rev;
        for(int j = str.length()-1;j>=0;j--){
            rev.push_back(str[j]);
        }
        if(rev==str){
            return true;
        }else{
            return false;
        }
    }
};