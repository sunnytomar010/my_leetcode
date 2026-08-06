class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        vector<char> str;
        for(int i=0;i<s.size();i++){
            if(!st.empty()&&st.top()==s[i])
            st.pop();
            else
            st.push(s[i]);
        }
        while(!st.empty()) {
         str.push_back(st.top());
          st.pop();
        }
        reverse(str.begin(), str.end());
        return string(str.begin(), str.end());
    }
};