class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(auto x : nums){
            freq[x]++;
        }
        for(auto x : freq){
            if(x.second<2){
                return x.first;
            }
        }
        return -1;
    }
};