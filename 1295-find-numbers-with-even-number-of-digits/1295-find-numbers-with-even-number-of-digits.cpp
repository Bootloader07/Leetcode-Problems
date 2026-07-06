class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count=0;
        for(int i = 0;i<nums.size();i++){
            int digits=0;
            
            int a = nums[i];
            while(a>0){
                digits++;
                a = a / 10;
            }
            if(digits%2==0){
                count++;
            }
        }
        return count;
    }
};