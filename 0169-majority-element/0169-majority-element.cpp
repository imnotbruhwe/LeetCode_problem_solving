class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> result;
        for(int num : nums){
            result[num]++;
        }
        int max = 0; 
        int pos = 0;
        for(auto& elem : result){
            if(elem.second > max){
                max = elem.second;
                pos = elem.first;
            }
        }
        return pos;
    }
};