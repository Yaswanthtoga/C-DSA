#include<bits/stdc++.h>
#include "../../datastructure/tree-node.h"

using namespace std;


// Recursive Pre-Order
void preOrder(TreeNode* root){
    if(!root)return;

    cout<<root->val;
    preOrder(root->left);
    preOrder(root->right);
}