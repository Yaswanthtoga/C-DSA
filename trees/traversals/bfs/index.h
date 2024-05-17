#pragma once
#include<bits/stdc++.h>
#include "../../datastructure/tree-node.h"
using namespace std;


vector<vector<int>> levelOrder(TreeNode* root){
    vector<vector<int>>levelordertraverse;
    queue<TreeNode*>node_queue;
    if(root)node_queue.push(root);

    while(!node_queue.empty()){
        int size = node_queue.size();
        vector<int>level;

        for(int i=0;i<size;i++){
            auto node = node_queue.front();
            node_queue.pop();
            level.push_back(node->val);

            if(node->left){
                node_queue.push(node->left);
            }

            if(node->right){
                node_queue.push(node->right);
            }
        }

        levelordertraverse.push_back(level);
    }
    return levelordertraverse;
}