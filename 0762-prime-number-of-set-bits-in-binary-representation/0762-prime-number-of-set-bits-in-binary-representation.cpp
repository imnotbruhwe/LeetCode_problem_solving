class Solution {
public:
    int tobitsandtosets(int n){
        int result = 0;
        while(n > 0){
            int digit = n % 2;
            result += digit;
            n = n / 2;
        }
        return result;
        
    }
    bool isprime(int n){
        if(n <= 1){return false;}
        for(int i = 2; i * i <= n; i++){
            if(n % i == 0){return false;}
        }
        return true;
    }
    int countPrimeSetBits(int left, int right) {
        int count = 0;
        while(left <= right){
            int bits = tobitsandtosets(left);
            if(isprime(bits)) count ++;
            left++;
        }
        return count;
    }
};