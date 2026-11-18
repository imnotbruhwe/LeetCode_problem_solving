class Solution {
public:
    map<char, string> morse_code = {
    {'a', ".-"},   {'b', "-..."}, {'c', "-.-."}, {'d', "-.."},  {'e', "."},
    {'f', "..-."}, {'g', "--."},  {'h', "...."}, {'i', ".."},   {'j', ".---"},
    {'k', "-.-"},  {'l', ".-.."}, {'m', "--"},   {'n', "-."},   {'o', "---"},
    {'p', ".--."}, {'q', "--.-"}, {'r', ".-."},  {'s', "..."},  {'t', "-"},
    {'u', "..-"},  {'v', "...-"}, {'w', ".--"},  {'x', "-..-"}, {'y', "-.--"},
    {'z', "--.."}
};
    int uniqueMorseRepresentations(vector<string>& words) {
        std::set<string> damn;
        for(string word : words){
            string result = "";
            for(char znak : word){
                result += morse_code[znak];
            }
            damn.insert(result);
        }
        return damn.size();
    }
};