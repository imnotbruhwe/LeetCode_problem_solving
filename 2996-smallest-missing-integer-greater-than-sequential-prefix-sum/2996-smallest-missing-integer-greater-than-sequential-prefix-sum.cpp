class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int total = nums[0];
        for(int j = 1; j < nums.size(); j++){
            if(nums[j] == nums[j - 1] + 1){
                total += nums[j];
            }
            else{
                break;
            }
        }
        std::unordered_set<int> num_set(nums.begin(), nums.end());
        while(num_set.count(total)){
            total += 1;
        }
        return total;
   
        
        
    }
};