class Solution {
public:
    int next(int n){
        int sum = 0;
        while(n > 0){
            int digit = n % 10;
            sum += digit * digit;
            n = n / 10 ;
        }
        return sum;
    }
    
    bool isHappy(int n) {
        if(n == 1){return true;}
        int slow = n;
        int fast = next(n);
        while(fast != 1 && slow != fast){
            slow = next(slow);
            fast = next(next(fast));
        }
        return fast == 1;
    }

};