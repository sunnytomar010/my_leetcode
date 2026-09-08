class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int start = 1;
        int end = *max_element(piles.begin(), piles.end());
        int ans = end;

        while (start <= end) {
            int mid = start + (end - start) / 2;
            long long total_time = 0;

            for (int i = 0; i < piles.size(); i++) {
                total_time += (piles[i] + mid - 1) / mid;
            }

            if (total_time > h) {
                start = mid + 1;
            } else {
                ans = mid;
                end = mid - 1;
            }
        }
        return ans;
    }
};