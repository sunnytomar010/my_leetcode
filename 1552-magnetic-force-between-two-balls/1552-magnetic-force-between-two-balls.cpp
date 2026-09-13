class Solution {
public:
    bool canPlace(vector<int> &arr,int k,int dist){
        int mag=1;
        int pos=arr[0];
        for(int i=1;i<arr.size();i++){
            if(abs(arr[i]-pos)>=dist){
                mag++;
                pos=arr[i];
                
                if(mag>=k)
                return true;
            }
        }
        return false;
    }
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int low=1;
        int high=position.back()-position.front();
        int ans=0;
        while(low<=high){
            int mid=low+(high-low)/2; 
            if(canPlace(position,m,mid)){
                ans=mid;
                low=mid+1;
            }else
            high=mid-1;
        }
        return ans;
    }
};