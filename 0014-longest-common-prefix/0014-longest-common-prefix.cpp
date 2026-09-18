class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";

        string pre = strs[0];

        for (int i = 1; i < strs.size(); i++) {
            int j = 0;

            while (j<pre.length() && j<strs[i].length() && pre[j]==strs[i][j]) {
                j++;
            }

            pre = pre.substr(0, j);

            if (pre.empty())
                return "";
        }

        return pre;
    }
};