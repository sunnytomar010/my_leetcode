class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n=citations.size();
        if(citations[n-1]<=0)
        return 0;
        int h=1;
        for(int i=n-2;i>=0;i--){
            if(citations[i]>=h+1)
            h++;

            else
            break;
        }
        return h;
    }
};