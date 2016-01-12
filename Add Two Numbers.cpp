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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int over = 0;
        ListNode* init = l1;
        ListNode* l1_last = nullptr;
        while(l1 != nullptr && l2 != nullptr){
            int temp = l1->val + l2->val + over;
            //cout << temp << endl;
            l1->val = temp%10;
            over = temp/10;
            
            l1_last = l1;
            l1 = l1->next;
            l2 = l2->next;
            
        }
        
        if(l1 == nullptr && l2 != nullptr){
            l1_last->next = l2;
            l1 = l2;
        }
        
        while(l1 != nullptr){
            int temp = l1->val + over;
            l1->val = temp%10;
            over = temp/10;
            l1_last = l1;
            l1=l1->next;
            
        }
        
        if(over != 0){
            l1_last->next = new ListNode(over);
        }
        
        return init;
        
        
        
    }
};
