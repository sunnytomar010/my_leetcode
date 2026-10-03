/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    struct cmp{
        bool operator()(ListNode* a,ListNode* b){
            return a->val>b->val;
        }
    };
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ListNode*,vector<ListNode*>,cmp>mini;
        for(int i=0;i<lists.size();i++){
            if (lists[i] != NULL) {
                mini.push(lists[i]);
            }
        }
        ListNode* dummy=new ListNode(-1);
        ListNode* tail=dummy;

        while(!mini.empty()){
            ListNode* temp=mini.top();
            mini.pop();
            tail->next=temp;
            tail=temp;
            if(temp->next!=NULL)
                mini.push(temp->next);
        }
        return dummy->next;
    }
};