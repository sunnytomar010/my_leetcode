class Solution {
public:
    struct cmp{
        bool operator()(pair<int,int>&a ,pair<int,int>&b){
            return a.first<b.first;
        }
    };
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,cmp>maxheap;

        for(int i=0;i<points.size();i++){
            int x=points[i][0];
            int y=points[i][1];
            int dist=x*x+y*y;

            maxheap.push({dist,i});

            if(maxheap.size()>k)
            maxheap.pop();
        }
        vector<vector<int>>ans;
        while(!maxheap.empty()){
            ans.push_back(points[maxheap.top().second]);
            maxheap.pop();
        }
        return ans;
    }
};