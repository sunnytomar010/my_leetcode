class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>maxheap;
        for(int i=0;i<stones.size();i++){
            maxheap.push(stones[i]);

        }
        while(maxheap.size()>1){
            int x=maxheap.top();
            maxheap.pop();
            int y=maxheap.top();
            maxheap.pop();
            if(x==y)
            continue;
            else{
                maxheap.push(x-y);
            }
        }
        if (maxheap.empty())
            return 0;
        return maxheap.top();
    }
};