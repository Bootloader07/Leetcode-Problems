class Solution {
public:
    bool isPalindrome(string s) {
        string ans;
        for(char x : s){
            if(isalpha(x) || isdigit(x)){
                ans.push_back(tolower(x));
            }
        }
        s = ans;
        int i = 0;
        int j = ans.length()-1;
        while(i<j){
            int temp = ans[i];
            ans[i] = ans[j];
            ans[j] = temp;
            j--;
            i++;
        }
        if(ans==s){
            return true;
        }
        else{
            return false;
        }
    }
};