class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int result = 0;
        for(string w : patterns){
            if(word.find(w) != string::npos){result++;}
        }
        return result;
    }
};