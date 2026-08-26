class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x = 0;
        for(auto X : operations){
            if(X=="X++"){
                x++;
            }else if(X=="X--"){
                x--;
            }else if(X=="--X"){
                --x;
            }else if(X=="++X"){
                ++x;
            }
            
        }
        return x;
    }
};