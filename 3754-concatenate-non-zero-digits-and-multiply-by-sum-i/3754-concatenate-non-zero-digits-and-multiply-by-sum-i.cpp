class Solution {
public:
    long long sumAndMultiply(int n) {
        vector<int> res = {};
        while(n>0){
            int a = n % 10;
            if(a!=0){
                res.push_back(a);
            }
            n/=10;
        }
        reverse(res.begin(),res.end());
        long long x = 0;
        long long sum = 0;
        for(int i = 0;i<res.size();i++){
            x = x*10 + res[i];
            sum = sum + res[i];
        }
        return x * sum;
    }
};