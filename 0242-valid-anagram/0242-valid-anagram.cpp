class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> str1;
        for(char x : s){
            str1[x]++;
        }
        unordered_map<char,int> str2;
        for(char x : t){
            str2[x]++;
        }
        if(str1==str2){
            return true;
        }
        else{
            return false;
        }
    }
};