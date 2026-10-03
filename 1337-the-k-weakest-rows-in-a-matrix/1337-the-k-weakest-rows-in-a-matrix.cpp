class Solution {
public:
    struct cmp{
        bool operator()(pair<int,int> a,pair<int,int> b){
            if(a.first!=b.first)
                return a.first>b.first;
            return a.second>b.second;
        }
    };
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,cmp>mini;
        for(int i=0;i<mat.size();i++){
            int dist=0;
            for(int j=0;j<mat[0].size();j++){
                if(mat[i][j]==1)
                dist++;
            }
                mini.push({dist,i});
        }
        vector<int>ans;

        while(k--){
            ans.push_back(mini.top().second);
            mini.pop();
        }
        return ans;
    }
};