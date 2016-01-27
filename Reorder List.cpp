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
    void reorderList(ListNode* head) {
        if(head==nullptr)return;
        ListNode* fast = head;
        ListNode* init = head;
        vector<ListNode*> ll;
        while(fast != nullptr){
            ll.push_back(fast);
            fast=fast->next;
        }
        auto it_l = ll.begin();
        auto it_r = ll.end()-1;
        
        while(it_l<it_r){
            (*it_l)->next = (*it_r);
            it_l++;
            (*it_r)->next = (*it_l);
            it_r--;
        }
        (*it_l)->next = nullptr;
        return ;
    }
};
