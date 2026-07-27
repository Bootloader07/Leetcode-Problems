class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int leftsum = 0;
        int rightsum = 0;
        int total = 0;
        for(int i = 0;i<nums.size();i++){
            total = total + nums[i];
        }
    
        for(int i = 0;i<nums.size();i++){
            rightsum = total - nums[i] - leftsum;
            if(rightsum==leftsum){
                return i;
            }
            leftsum = leftsum + nums[i];
        }
        return -1;
    }
};