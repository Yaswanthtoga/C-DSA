#pragma once
#include<bits/stdc++.h>
#include "./tree-node.h"
#include "../traversals/dfs/inorder.h"
#include "../traversals/dfs/preorder.h"
#include "../traversals/dfs/postorder.h"
#include "../traversals/bfs/index.h"

using namespace std;

class Tree{

    private:
    TreeNode* _root=nullptr;

    bool _isLeafNode(TreeNode* _node){
        return (!_node->left && !_node->right);
    }

    public:

    class Traversal{
        TreeNode* _traversalroot;
        public:
        Traversal(TreeNode* root){
            this->_traversalroot = root;
        }
        void preorder(){
            preOrder(this->_traversalroot);
        }
        void inorder(){
            inOrder(this->_traversalroot);
        }
        void postorder(){
            postOrder(this->_traversalroot);
        }
        vector<vector<int>> levelordertraversal(){
            return levelOrder(_traversalroot);
        }
    };

    TreeNode* getRoot(){
        return this->_root;
    }

    void createTree(const vector<int> &_childNodeValues){
        queue<TreeNode*>_storenodes;
        this->_root = new TreeNode(_childNodeValues[0]);
        if(_childNodeValues[0]!=-1)_storenodes.push(this->_root);
        int _ind = 1,_size=_childNodeValues.size();

        while(!_storenodes.empty()){
            if(_ind>=_size){
                break;
            }

            TreeNode* _topNode = _storenodes.front();
            _storenodes.pop();

            // Add it to the left child
            if(_ind<_size && _childNodeValues[_ind]!=-1){
                _topNode->left = new TreeNode(_childNodeValues[_ind]);
                _storenodes.push(_topNode->left);
            }
            _ind++;

            // Add it to the right child
            if(_ind<_size && _childNodeValues[_ind]!=-1){
                _topNode->right = new TreeNode(_childNodeValues[_ind]);
                _storenodes.push(_topNode->right);
            }
            _ind++;
        }
    }

    vector<TreeNode*> getLeafNodes(TreeNode* root,vector<TreeNode*>_leafNodes=*(new vector<TreeNode*>())){
        if(!root)return _leafNodes;

        vector<TreeNode*>_leftsubtree = getLeafNodes(root->left,_leafNodes);
        if(_isLeafNode(root))_leafNodes.push_back(root);
        vector<TreeNode*>_rightsubtree = getLeafNodes(root->right,_leafNodes);
        _leftsubtree.insert(_leftsubtree.end(), _rightsubtree.begin(), _rightsubtree.end());

        return _leftsubtree;
    }
};