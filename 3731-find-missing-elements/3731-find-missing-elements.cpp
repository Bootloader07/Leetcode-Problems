class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int max = nums[0];
        int min = nums[0];
        for(int i = 0;i<nums.size();i++){
            if(nums[i]>max){
                max = nums[i];
            }
            if(nums[i]<min){
                min = nums[i];
            }
        }
        sort(nums.begin(),nums.end());
        int j = 0;
        vector<int> ans = {};
        for(int i = min;i<max;i++){
            if(i==nums[j]){
                j++;
            }else{
                ans.push_back(i);
            }
        }
        return ans;
    }
};