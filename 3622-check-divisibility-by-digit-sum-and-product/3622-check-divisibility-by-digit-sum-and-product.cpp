class Solution {
public:
    bool checkDivisibility(int n) {
        int x;
        int sum = 0;
        int prod = 1;
        int num = n;
        while(num>0){
            x = num % 10;
            sum = sum + x;
            prod = prod * x;
            num = num / 10;
        }
    
        if(n%(sum+prod)==0){
            return true;
        }
        return false;
    }
};