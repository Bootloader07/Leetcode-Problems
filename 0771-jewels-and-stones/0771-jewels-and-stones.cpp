class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count = 0;
        for(char x : stones){
            for(char y : jewels){
                if(x==y){
                    count++;
                }
            }
        }
        return count;
    }
};