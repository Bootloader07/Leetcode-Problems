class Solution {
public:
    int maxProduct(int n) {
        int fmax = 0;
        int smax = 0;
        int a;
        while(n>0){
            a = n % 10;
            n = n / 10;
            if(a>=fmax){
                smax = fmax;
                fmax = a;
            }else if(a>=smax){
                smax = a;
            }
            
        }
        return fmax*smax;
        
    }
};