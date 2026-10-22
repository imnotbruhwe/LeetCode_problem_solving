class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       vector<int> neu;
       int k = 0;
       for(int num : nums){
            if(num == 0){k++;}
            else{neu.push_back(num);}
       }
       for(int i = 0; i < k; i++){
         neu.push_back(0);
       }
       nums = neu;

    }
};