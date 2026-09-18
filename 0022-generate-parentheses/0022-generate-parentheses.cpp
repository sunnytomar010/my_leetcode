class Solution {
public:
    vector<string> generateParenthesis(int n) {
      vector<string> ans;
      generate(ans,"",n,0,0);  
      return ans;
    }
    void generate(vector<string>& ans, string temp, int n, int open, int close){
        if(temp.size()==2*n){
            ans.push_back(temp);
            return;
        }
        if(open<n){
            generate(ans,temp+"(",n,open+1,close);

        }
        if(close<open){
            generate(ans, temp+")",n ,open, close+1);
        }
    }
};