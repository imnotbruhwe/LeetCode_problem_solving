class Solution {
public:
    bool canJump(vector<int>& nums) {
        int farmax = 0;
        for(int i = 0; i < nums.size(); i++){
            if(i > farmax){return false;}
            farmax = max(farmax, i + nums[i]);
            if(farmax >= nums.size() - 1) return true;
        }
        return true;
    }
};