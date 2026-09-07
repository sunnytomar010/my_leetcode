class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int ans=0;
        unordered_map<int,int>f;
        for(auto x:nums)
        f[x]++;

        for(auto x:f){
            if(x.second==1)
            ans+=x.first;
        }
        

        return ans;
    }
};