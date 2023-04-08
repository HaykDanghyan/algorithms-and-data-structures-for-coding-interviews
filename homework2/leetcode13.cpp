Select tags
0/5
class Solution {
public:
    int romanToInt(std::string s) {
        std::map<char, int> mp {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };
        int result = 0;
        for (int i = 0; i < s.length(); ++i) {
            if (mp[s[i]] < mp[s[i + 1]]) {
                result -= mp[s[i]];
            } else {
                result += mp[s[i]];
            }
        }    
        return result;
    }
};