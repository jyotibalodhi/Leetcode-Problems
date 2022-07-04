
class Solution {
private:
    unordered_map<Node*, Node*> m;
    
public:
    
    Node* cloneGraph(Node* node) {
        
        if (!node) return NULL;
        if (m.find(node) != m.end())
            return m[node];
        
        Node* copy = new Node(node->val);
        m[node] = copy;
        
        for(Node* neighbor: node->neighbors) {
            copy->neighbors.push_back(cloneGraph(neighbor));
        }
        
        return copy;
    }
};