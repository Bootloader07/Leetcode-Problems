class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(int  x : nums){
            freq[x]+=1;
            if(freq[x]>1){
                return true;
            }
        }
        return false;
    }
};