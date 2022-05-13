/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/
class Solution {
public:
    void postOrder(Node* root, Node* next){
        if(!root)
            return;
        postOrder(root->left, root->right);
        root->next = next;
        if(next)
            postOrder(root->right, next->left);
        else
            postOrder(root->right, NULL);
        return;
    }
    Node* connect(Node* root) {
        postOrder(root, NULL);
        return root;
    }
};