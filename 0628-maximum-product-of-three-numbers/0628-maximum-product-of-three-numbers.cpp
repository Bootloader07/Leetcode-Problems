class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int fmax = INT_MIN;
        int smax = INT_MIN;
        int tmax = INT_MIN;
        int fmin = INT_MAX;
        int smin = INT_MAX;
        for(int i = 0;i<nums.size();i++){
            if(nums[i]>fmax){
                tmax = smax;
                smax = fmax;
                fmax = nums[i];
            }else if(nums[i]>smax){
                tmax = smax;
                smax = nums[i];
            }else if(nums[i]>tmax){
                tmax = nums[i];
            }
            if(nums[i]<fmin){
                smin = fmin;
                fmin = nums[i];
            }else if(nums[i]<smin){
                smin = nums[i];
            }
        }
        if((fmax*tmax*smax)>(fmin*smin*fmax)){
            return fmax*tmax*smax;
        }else{
            return fmin*smin*fmax;
        }
    }
};