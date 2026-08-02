class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        
        unordered_map<int,int> freq = {};
        set<int> myset = {};
        for(auto x : nums){
            for(int y : x){
                freq[y]++;
            }
        }
        for(auto x : nums){
            for(int y : x){
                if(freq[y]==nums.size()){
                    myset.insert(y);
                }
            }
        }
        return vector<int>(myset.begin(), myset.end());
    }
};