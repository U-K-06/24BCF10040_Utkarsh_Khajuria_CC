class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> chars;
        int left = 0;
        int result = 0;
        for(int right = 0; right<s.length(); right++)
        {
            while(chars.find(s[right]) != chars.end())
            {
                chars.erase(s[left]);
                left++;
            }
            chars.insert(s[right]);
            result = (result>(right - left  + 1))?result:right - left + 1;
        }
        return result;
    }
};