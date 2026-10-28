class Solution {
public:
    bool isVovel(char c){
        c = tolower(c);
        if( c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){return true;}
        return false;
    }
    string reverseVowels(string s) {
        int i = 0;
        int j = s.size() - 1;
        while(i < j){
            if(!isVovel(s[i])){
                i++;
            }
            else if(!isVovel(s[j])){
                    j--;
                }
            else{
                swap(s[i],s[j]);
                j--;
                i++;
            }
        }
        return s;
    }
    
};