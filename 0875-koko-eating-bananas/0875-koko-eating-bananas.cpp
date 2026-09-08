class Solution {
public:
    long long fun(vector<int>& a,long long mid){
        long long h=0;
        for(int i=0;i<a.size();i++){
            h=h+a[i]/mid;
            if(a[i]%mid!=0)
            h++;
        }
        return h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high=*max_element(piles.begin(),piles.end());
        int res=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            long long hours=fun(piles,mid);
            if(hours>h)
            low=mid+1;
            else{
                res=mid;
                high=mid-1;

            }
        }
        return res;
    }
};