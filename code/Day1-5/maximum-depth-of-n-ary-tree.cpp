/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/
class Solution {
public:
    int maxDepth(Node* root) {
        if(root==NULL) return 0;
        else{
            int i,h=0;
            for(i=0;i<root->children.size();i++){
                h=max(h,maxDepth(root->children[i]));
            }
            return 1+h;
        }
    }
};w
