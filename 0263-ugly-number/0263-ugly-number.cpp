class Solution {
public:
    bool isUgly(int n) {
        if(n <= 0){return false;}
        if(n == 1){return true;}
        int i = 0;
        vector<int> only = {2,3,5};
        while(i < 3){
            if(n % only[i] == 0){
                n = n / only[i];
            }
            else i++;
        }
        return n == 1;
    }
};