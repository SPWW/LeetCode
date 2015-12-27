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
    ListNode *detectCycle(ListNode *head) {
        if(head==nullptr || head->next==nullptr)return nullptr;
        ListNode* fast=head;
        ListNode* slow=head;
        ListNode* finder = head;
        do{

            if(fast!=nullptr && fast->next!=nullptr){
                fast=fast->next->next;
            }else{
                return nullptr;
            }
            if(slow!=nullptr){
                slow=slow->next;
            }else{
                return nullptr;
            }
            if(fast==nullptr || slow==nullptr)return nullptr;
        }while(fast!=slow);

        while(slow != finder){
            slow=slow->next;
            finder=finder->next;
        }
        return finder;
    }
};
