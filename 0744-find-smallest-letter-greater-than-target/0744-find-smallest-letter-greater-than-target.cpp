class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        char min = target;
        for(char letter : letters){
            if((letter > target && min == target)){
                min = letter;
            }
            else if (letter > target &&  letter <= min){
                min = letter;
            }
        }
        if(min == target){return letters[0];}
        return min;
    }
};