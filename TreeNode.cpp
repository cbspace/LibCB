#include "TreeNode.h"

TreeNode::TreeNode(bool root_node, TreeNode* parent, WebElement payload_in) :
    is_root_node(root_node) ,
    parent_node(parent),
    payload(payload_in)
{
    
}