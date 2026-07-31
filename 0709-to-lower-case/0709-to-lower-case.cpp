class Solution {
public:
    string toLowerCase(string s) {
        string t;
        for(char x : s){
            if(x>=65 && x<=90){
                t.push_back(x+32);
            }else{
                t.push_back(x);
            }
        }
        return t;
    }
};