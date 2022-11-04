class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char, int> sm;
        unordered_map<char, int> st;
        
        for(const auto ch: s) {
            if(!sm[ch]) {
                sm[ch] = 1;
                continue;
            }
            ++sm[ch];
        }
        for(const auto ch: t) {
            if(!sm[ch]) {
                st[ch] = 1;
                continue;
            }
            ++st[ch];
        }
        
        for(const auto ch: t) {
            if(st[ch] != sm[ch]) return ch;
        }
        return t[0];
    }
};