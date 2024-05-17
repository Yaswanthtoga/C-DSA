#include<bits/stdc++.h>
#include "../../datastructure/tree-node.h"

using namespace std;


// Recursive Pre-Order
void inOrder(TreeNode* root){
    if(!root)return;

    inOrder(root->left);
    cout<<root->val;
    inOrder(root->right);
}