class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int tab[26] = {0};
        for(char c : text){
            tab[c -'a']++;
        }
        return min({tab['b' - 'a'],
                    tab['a' - 'a'],
                    tab['l' - 'a'] / 2,
                    tab['o' - 'a'] / 2,
                    tab['n' - 'a']});
    }
};