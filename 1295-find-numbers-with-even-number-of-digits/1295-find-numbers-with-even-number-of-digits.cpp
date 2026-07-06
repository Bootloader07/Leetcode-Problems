class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int digits=0;
        int count=0;
        for(int i = 0;i<nums.size();i++){
            // int element=nums[i];
            string element = to_string(nums[i]);
            for(char a : element){
                digits++;
            }
            if(digits%2==0){
                count++;
            }
        }
        // for(char a : nums){
        //     digits++;
        // }
        // if(digits%2==0){
        //     count++;
        // }
        return count;
    }
};