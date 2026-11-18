class Solution {
public:
    string build(string word){
        string result; 
        int skip = 0; 
        for(int i = word.size() - 1; i >= 0; i--){
            if(word[i] == '#'){skip++;}
            else if (skip > 0){skip--;}
            else{
                result.push_back(word[i]);
            }
        }
        return result;
    }
    bool backspaceCompare(string s, string t) {
        return build(s) == build(t);
    }
};