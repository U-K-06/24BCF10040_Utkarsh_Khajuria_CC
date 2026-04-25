class Solution {
public:
    bool isValid(string s) {
        unordered_map<char, char> mapp = {{')','('}, {']','['}, {'}','{'}};
        stack<char> st;

        for (char i : s) {
            if (mapp.count(i)) {
                if (!st.empty() && st.top() == mapp[i]) {
                    st.pop();
                } else {
                    return false;
                }
            } else {
                st.push(i);
            }
        }
        return st.empty();
    }
};
