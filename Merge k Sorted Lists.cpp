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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size()==0)return nullptr;
        vector<ListNode*> nodes;
        for(auto each : lists){
            while(each!=nullptr){
                nodes.push_back(each);
                each=each->next;
            }
        }
        if(nodes.size()==0)return nullptr;
        sort(nodes.begin(),nodes.end(),[](ListNode* a,ListNode* b)->bool{
            return a->val<b->val;
        });
        for(int i = 0;i<nodes.size()-1;++i){
            nodes[i]->next = nodes[i+1];
        }
        nodes.at(nodes.size()-1)->next = nullptr;
        return nodes.at(0);
    }
};
