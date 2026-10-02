class Solution {
public:
    struct cmp{
        bool operator()(pair<int,char>& a,pair<int,char>& b){
            if(a.first!=b.first)
            return a.first<b.first;

            return a.second<b.second;
        }
    };
    string reorganizeString(string s) {
      unordered_map<char,int>mp;
      for(auto c:s)
      mp[c]++;

      priority_queue<pair<int,char>,vector<pair<int,char>>,cmp>pq;
      for(auto& [a,b] : mp){
        pq.push({b,a});
      }  
      string res="";
      int seat=0;
      while(!pq.empty()){
        pair<int,char>p=pq.top();
        pq.pop();
        if(seat==0 || res[seat-1]!=p.second ){
            res+=p.second;
            seat++;
            p.first--;
            if(p.first>0)
            pq.push(p);
        }else{
            if(pq.empty())
            return "";
            pair<int,char>p1=pq.top();
            pq.pop();
            res+=p1.second;
            seat++;
            p1.first--;
            if(p1.first>0)
            pq.push(p1);

            pq.push(p);
        }
      }
      return res;
    }
};