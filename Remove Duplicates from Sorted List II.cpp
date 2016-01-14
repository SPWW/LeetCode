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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* be = nullptr;
        ListNode* en = nullptr;
        ListNode* init = head;
        ListNode* last = nullptr;
        while(head!=nullptr){
            if(be == nullptr && en == nullptr){
                be=head;
                en=head;
            }else{
                if(head->val == en->val){
                    en=head;
                }else{
                    if(be == en){
                         last = be;
                    }else{
                        if(last == nullptr){
                            init = head;
                        }else{
                            
                            last->next = head;
                           
                        }
                    }
                    
                    be=head;
                    en=head;
                }
            }
            head = head->next;
        }
        
        if(be!=en){
            if(last == nullptr){
                init = nullptr;
            }else{
                
                last->next = nullptr;;
               
            }
        }
        
        
        
        return init;
        
    }
};
