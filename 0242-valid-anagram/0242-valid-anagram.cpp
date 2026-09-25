class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> a;
        unordered_map<char,int> b;
        for(auto x : s){
            a[x]++;
        }
        for(auto x : t){
            b[x]++;
        }
        if(a==b){
            return true;
        }else{
            return false;
        }
    }
};