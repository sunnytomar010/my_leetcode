class Solution {
public:
    void fun(vector<int>& nums,int n,int idx,vector<int>& temp,vector<vector<int>>& ans){
        if(idx==n){
            ans.push_back(temp);
            return;
        }
        fun(nums,n,idx+1,temp,ans);
        temp.push_back(nums[idx]);
        fun(nums,n,idx+1,temp,ans);
        temp.pop_back();
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int>temp;
        fun(nums,nums.size(),0,temp,ans);
        return ans;
    }
};