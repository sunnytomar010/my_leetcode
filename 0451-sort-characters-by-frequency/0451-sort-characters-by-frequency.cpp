class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>mp;
        for(auto x:s)
        mp[x]++;

        vector<pair<int, int>> freq;

        for (auto& it : mp) {
            freq.push_back({it.second, it.first});
        }
        sort(freq.rbegin(),freq.rend());
        string ans;
        for(auto &x:freq)
        ans+=string(x.first,x.second);

        return ans;
    }
};