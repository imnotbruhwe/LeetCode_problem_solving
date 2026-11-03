class Solution {
public:
    int minMoves(vector<int>& nums) {
        int max = 0;
        for(int i : nums){
            if(i > max){max = i;}
        }
        int result = 0;
        for(int i : nums){
            result += max - i;
        }
        return result;
    }
};