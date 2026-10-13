class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0){
            return false;
        }
        string num = to_string(x);
        string num2 = num;
        reverse(num.begin(), num.end());
        if(num != num2){
            return false;
        }
        return true;
    }
};