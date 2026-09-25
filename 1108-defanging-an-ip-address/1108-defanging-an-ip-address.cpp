class Solution {
public:
    string defangIPaddr(string address) {
        string res;
        for(int i = 0;i<address.size();i++){
            if(address[i]!='.'){
                res.push_back(address[i]);
            }
            if(address[i]=='.'){
                res.push_back('[');
                res.push_back('.');
                res.push_back(']');
            }
        }
        return res;
    }
};