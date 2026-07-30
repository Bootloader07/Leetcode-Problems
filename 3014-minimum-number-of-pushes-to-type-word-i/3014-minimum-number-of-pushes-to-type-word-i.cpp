class Solution {
public:
    int minimumPushes(string word) {
        int press = 0;
        vector<int> key = {};
        for(char x : word){
            key.push_back(x);
            if(key.size()<=8){
                press++;
            }
            if(key.size()>8 && key.size()<=16){
                press+=2;
            }
            if(key.size()>16 && key.size()<=24){
                press+=3;
            }
            if(key.size()>24){
                press+=4;
            }
        }
        return press;
    }
};