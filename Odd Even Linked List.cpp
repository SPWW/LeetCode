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
    ListNode* move_back(ListNode* head,int nums){
        //cout << nums << endl;
        
        ListNode* tp = head;
        ListNode* tp_after = head->next;
        if(tp_after == nullptr)return nullptr;
        ListNode* tp_before = nullptr;
        for(int i = 0;i<=nums;++i){
            tp=tp->next;
            if(tp==nullptr)return nullptr;
            if(i==nums-1){
                tp_before = tp;
            }
        }
        
        head->next=tp;
        tp_before->next = tp->next;
        tp->next=tp_after;
        
    }
    ListNode* oddEvenList(ListNode* head) {
        if(head==nullptr)return nullptr;
        ListNode* init = head;
        ListNode* temp = head;
        int i = 0;
        while(1){
            temp = move_back(temp,++i);
            if(temp == nullptr)return init;
        }
        
        return init;
        
        
        
    }
};
