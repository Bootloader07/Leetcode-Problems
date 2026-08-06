class Solution {
public:
    string defangIPaddr(string address) {
        string s;
        for(char x : address){
            if(x!='.'){
                s.push_back(x);
            }
            if(x=='.'){
                s.push_back('[');
                s.push_back('.');
                s.push_back(']');
            }
        }
        return s;
    }
};