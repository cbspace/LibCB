#include "Tree.h"

Tree::Tree() : 
    primary_node(true,nullptr,WebElement(WebElementTagType::none,""))
{}

TreeNode* Tree::get_primary() {
    return &primary_node;
}

TreeNode* Tree::create_node_under(TreeNode* parent, WebElement payload_in)  {
    return new TreeNode(false,parent, payload_in);
}