class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()){
            return false;
        }
        unordered_map<char,int> freq;
        for(auto x : s){
            freq[x]+=1;
        }
        unordered_map<char,int> freq2;
        for(auto x : t){
            freq2[x]+=1;
        }
        if(freq==freq2){
            return true;
        }
        return false;
    }
};