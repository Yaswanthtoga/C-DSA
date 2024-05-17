#include<bits/stdc++.h>
#include "./trees/datastructure/tree.h"
#include "./trees/datastructure/tree-node.h"



using namespace std;

int main(){
    Tree treeObject;
    // Create the tree structure in a way that no child -> -1 and child -> value
    int nodeVal;
    vector<int>_childNodeValues;
    while(cin>>nodeVal){
        _childNodeValues.push_back(nodeVal);
    }

    treeObject.createTree(_childNodeValues);
    TreeNode* root = treeObject.getRoot();

    // Traversals
    Tree::Traversal traversal(root);
    traversal.preorder();

    return 0;
}