class Solution {
public:
    int maximumSum(vector<int>& arr) {
        vector<int> wod(arr.size());
        vector<int> wd(arr.size());

        wod[0]=arr[0];
        wd[0]=arr[0];

        int max_ans=arr[0];
        for(int i=1;i<arr.size();i++){
            wod[i]=max(arr[i],wod[i-1]+arr[i]);
            wd[i]=max(wod[i-1],wd[i-1]+arr[i]);
            max_ans = max(max_ans, max(wod[i], wd[i]));
        }
        return max_ans;
        
    }
};