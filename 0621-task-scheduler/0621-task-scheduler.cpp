class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        priority_queue<int>maxi;
        unordered_map<char,int>mp;
        for(auto c:tasks)
        mp[c]++;

        for(auto& [a,b]:mp)
        maxi.push(b);

        int time=0;
        while(!maxi.empty()){
            vector<int>remain;
            int cycle=n+1;
            
            while(cycle>0 && !maxi.empty()){
                int freq=maxi.top();
                maxi.pop();
                if(freq>1)
                remain.push_back(freq-1);

                time++;
                cycle--;

            }
            for(auto x:remain)
            maxi.push(x);

            if(maxi.empty())break; 
            time+=cycle;
        }
       return time; 
    }
};