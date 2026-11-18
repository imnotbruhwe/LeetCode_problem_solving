class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int result = -1;
        for(int i = 0; i < nums.size(); i++){
            bool wrong = false;
            for(int number : nums){
                if (nums[i] != number && nums[i] < number * 2){wrong = true;}
            }
            if(!wrong){result = i;}
        }
        return result;
    }
};