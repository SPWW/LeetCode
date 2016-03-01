/**
 * Definition for undirected graph.
 * struct UndirectedGraphNode {
 *     int label;
 *     vector<UndirectedGraphNode *> neighbors;
 *     UndirectedGraphNode(int x) : label(x) {};
 * };
 */
class Solution {
public:
    map<int,UndirectedGraphNode*> lab2pos;
    map<int,UndirectedGraphNode*> new_nodes;
    void helper(UndirectedGraphNode* node){
        UndirectedGraphNode* new_node = new UndirectedGraphNode(node->label);
        lab2pos[node->label]=node;
        new_nodes[node->label]=new_node;
        for(auto& each:node->neighbors){
            if(lab2pos.find(each->label) == lab2pos.end()){
                helper(each);
            }
        }
        return;
    }
    UndirectedGraphNode *cloneGraph(UndirectedGraphNode *node) {
        if(node==nullptr)return nullptr;
        helper(node);
        for(auto& each:new_nodes){
            for(auto& x:(lab2pos[each.first])->neighbors){
                each.second->neighbors.push_back(new_nodes[x->label]);
            }
        }
        return new_nodes[node->label];
    }
};
