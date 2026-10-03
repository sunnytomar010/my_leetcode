class Solution {
public:
    struct cmp{
        bool operator()(pair<int,int>a,pair<int,int>b){
           if(a.first != b.first)
                return a.first > b.first;
            return a.second>b.second;
        }
    };
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,cmp>mini;
        for(int i=0;i<arr.size();i++){

            mini.push({abs(arr[i]-x),i});
        }
        vector<int>ans;
        while(k--){
            ans.push_back(arr[mini.top().second]);
            mini.pop();
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};