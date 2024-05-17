#include<bits/stdc++.h>
#include "tree-node.cpp"

using namespace std;

template <typename T>
class Tree{
    struct TreeNode<T>* root;

    public:
    TreeNode<T>* getRoot(){
        this->root = new TreeNode(0);
        return this->root;
    }

};