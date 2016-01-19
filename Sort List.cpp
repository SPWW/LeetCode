/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if(head==nullptr)return head;
        vector<ListNode*> ll;
        while(head!=nullptr){
            ll.push_back(head);
            head=head->next;
        }
        sort(ll.begin(),ll.end(),[](ListNode* n1,ListNode* n2)->bool{return n1->val<n2->val;});
        
        for(int i = 0;i<ll.size()-1;++i){
            ll[i]->next=ll[i+1];
        }
        ll[ll.size()-1]->next = nullptr;
        return *ll.begin();
    }
};
