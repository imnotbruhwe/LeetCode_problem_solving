class Solution {
public:
    string toLowerCase(string s) {
        string result = "";
        for(char znak : s){
            if(znak >= 'A' && znak <= 'Z'){
                result.push_back(znak + 32);
            }
            else{result.push_back(znak);}
        }
        return result;
    }
};