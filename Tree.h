// A simple tree structure
// Does not support deletion of nodes

#pragma once

#include "TreeNode.h"
#include "WebElement.h"

namespace CBLib {

class Tree
{
public:
    Tree();
    TreeNode* get_primary();
    TreeNode* create_node_under(TreeNode* parent, WebElement payload_in);

private:
    TreeNode primary_node;
};
    
};

using CBLib::Tree;