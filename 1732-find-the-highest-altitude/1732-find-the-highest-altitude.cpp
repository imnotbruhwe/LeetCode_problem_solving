class Solution {
public:
    int largestAltitude(vector<int>& gain) {
       vector<int> nums = {0};
       int i = 0;
       int max = 0;
       for(int num : gain){
        nums.push_back(num + nums[i]);
        if(max < (num + nums[i])){max = num + nums[i];}
        i++;
       } 
       return max;
    }
};