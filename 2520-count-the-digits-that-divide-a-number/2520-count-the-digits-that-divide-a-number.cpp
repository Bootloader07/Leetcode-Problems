class Solution {
public:
    int countDigits(int num) {
        int count = 0;
        int cpy = num;
        while(num>0){
            int val = num % 10;
            if(val!=0){
                if(cpy%val==0){
                    count++;
                }
            }
            num = num / 10;
        }
        return count;
    }
};