class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int st = 0;
        int end = arr.size() - 1;

        while (st < end) {
            int mid = st + (end - st) / 2;

            if (arr[mid] < arr[mid + 1]) {
                
                st = mid + 1;
            } else {
                
                end = mid;
            }
        }
        return st;

     /**   int peak= *max_element(arr.begin(),arr.end());
       for(int i=0;i<arr.size();i++){
        if(peak==arr[i])
        return i;
       }
       return -1;*/
    }
};
