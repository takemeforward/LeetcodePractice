class Solution {
public:
    int maximumGap(vector<int>& nums) {
        if(nums.size()<2){
            return 0;
        }
        sort(nums.begin(),nums.end());
        int diff = nums[1]-nums[0];
        for(int i = 0; i<nums.size()-1; i++){
            int d = nums[i+1] - nums[i];
            if(diff<=d)
            diff = d;
        }
        return diff;
    }
};