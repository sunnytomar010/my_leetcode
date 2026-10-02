class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        vector<pair<int,int>>project;
        for(int i=0;i<profits.size();i++){
            project.push_back({capital[i],profits[i]});
        }
        sort(project.begin(),project.end());
        int idx=0;
        priority_queue<int> pq;
        while(k--){
            
            while(project[idx].first<=w && idx<capital.size()){
                pq.push(project[idx].second);
                idx++;
            }
            if(pq.empty())
            break;
            
            w+=pq.top();
            pq.pop();
            
        }
        return w;
    }
};