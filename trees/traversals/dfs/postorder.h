#include<bits/stdc++.h>
#include "../../datastructure/tree-node.h"

using namespace std;


// Recursive Pre-Order
void postOrder(TreeNode* root){
    if(!root)return;

    postOrder(root->left);
    postOrder(root->right);
    cout<<root->val;
}