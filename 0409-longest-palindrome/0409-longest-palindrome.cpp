class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>f;
        for(char c:s)
        f[c]++;
        int count=0;
        int maxi=0;

        for(auto i:f){
            if(i.second%2==0)
            count+=i.second;
             else {
                count += i.second - 1;
                maxi = 1;
            }
        }
        count+=maxi;
        return count;
    }
};