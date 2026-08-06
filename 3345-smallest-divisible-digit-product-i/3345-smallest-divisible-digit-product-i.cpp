class Solution {
public:
    int smallestNumber(int n, int t) {
        int product = 1;
        while(product%t!=0){
            product = 1;
            int a = n;
            int x;
            while(a>0){
                x = a % 10;
                product = product * x;
                a = a / 10;
            }
            if(product%t==0){
                return n;
            }else{
                n++;
            }
        }
        return n;
    }
};