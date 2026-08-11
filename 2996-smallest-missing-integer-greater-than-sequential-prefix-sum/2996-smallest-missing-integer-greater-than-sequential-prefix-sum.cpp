class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int sum = nums[0];
        int i = 1;
        for (;i<nums.size();i++) {
            if(nums[i]==nums[i-1]+1) {
                sum+=nums[i];
            }else{
                break;
            }
        }
        unordered_set<int> s(nums.begin(),nums.end());
        while(s.count(sum)) {
            sum++;
        }
        return sum;
    }
};