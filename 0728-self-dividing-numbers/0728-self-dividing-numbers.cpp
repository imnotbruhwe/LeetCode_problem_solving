class Solution {
public:
    bool isok(int n){
        int temp = n;
        while(n != 0){
            int digit = n % 10;
            if(digit == 0){return false;}
            if(temp % digit != 0){return false;}
            n = n / 10;
        }
        return true;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> result;
        while(left <= right){
            if(isok(left)){result.push_back(left);}
            left++;
        }
        return result;
    }
};