class Solution {
public:
    struct cmp{
        bool operator()(pair<int,int>& a,pair<int,int>& b){
            if(a.first!=b.first)
            return a.first>b.first;

            return a.second>b.second;
        }
    };
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(auto x:nums)
        mp[x]++;

        priority_queue<pair<int,int> , vector<pair<int,int>>, cmp> minheap;

        for(auto& [element,frequency]:mp){
            minheap.push({frequency,element});

            if(minheap.size()>k)
            minheap.pop();
        }
        vector<int> ans;

        while(!minheap.empty()){
            ans.push_back(minheap.top().second);
            minheap.pop();
        }
        return ans;

    }
};