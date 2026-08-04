class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
       vector<vector<int>> ans;
       int i=0,j=0;
       while(i<firstList.size()&&j<secondList.size()){
        int strt=max(firstList[i][0],secondList[j][0]);
        int end=min(firstList[i][1],secondList[j][1]);
       
       if(strt<=end)
       ans.push_back({strt,end});

       if(firstList[i][1]<secondList[j][1])
       i++;
       else 
       j++;
       }
       return ans;
    }
};