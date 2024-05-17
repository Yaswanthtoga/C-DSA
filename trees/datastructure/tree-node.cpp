#include<bits/stdc++.h>
using namespace std;

template <typename T>
struct TreeNode{
    T val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(T value){
        this->val=value;
        this->left=nullptr;
        this->right=nullptr;
    }
};