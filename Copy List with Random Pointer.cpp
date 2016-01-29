/**
 * Definition for singly-linked list with a random pointer.
 * struct RandomListNode {
 *     int label;
 *     RandomListNode *next, *random;
 *     RandomListNode(int x) : label(x), next(NULL), random(NULL) {}
 * };
 */
class Solution {
public:
    RandomListNode *copyRandomList(RandomListNode *head) {
        if(head==nullptr)return nullptr;
        RandomListNode* bp = head;
        map<RandomListNode*,int> nodes;
        vector<int> rps;
        int in = 0;
        while(bp!=nullptr){
            nodes[bp]=in;
            bp=bp->next;
            ++in;
        }
        bp = head;
        while(bp!=nullptr){
            auto it = nodes.find(bp->random);
            if(it!=nodes.end()){
                rps.push_back(it->second);
            }else{
                rps.push_back(-1);
            }
            bp=bp->next;
        }
        bp = head;
        vector<RandomListNode*> vcp;
        while(bp!=nullptr){
            RandomListNode* tp = new RandomListNode(bp->label);
            vcp.push_back(tp);
            bp=bp->next;
        }
        for(int i = 0;i<vcp.size();++i){
            if(i!=vcp.size()-1){
            vcp.at(i)->next = vcp.at(i+1);
            }else{
            vcp.at(i)->next = nullptr;
            }
            if(rps.at(i)!=-1)
            vcp.at(i)->random = vcp.at(rps.at(i));
        }
        return *vcp.begin();
    }
};
