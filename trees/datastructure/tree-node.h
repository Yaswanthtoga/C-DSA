#pragma once
#include<bits/stdc++.h>
#define ROOT_DEFAULT_VALUE 0
using namespace std;


struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode():TreeNode(ROOT_DEFAULT_VALUE){}
    TreeNode(int value){
        this->val=value;
        TreeNode* left=nullptr;
        TreeNode* right=nullptr;
    }
    TreeNode(int value,TreeNode* _left,TreeNode* _right):TreeNode(value){
        this->left=_left;
        this->right=_right;
    }
};