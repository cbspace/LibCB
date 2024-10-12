#include "../Tree.h"
#include <iostream>

using LibCB::Tree;
using LibCB::TreeNode;

void build_tree(std::shared_ptr<Tree> tree) {
    std::shared_ptr<TreeNode> child1 = std::make_shared<TreeNode>("INTERPRETED");
    tree->root->child1 = child1;
    std::shared_ptr<TreeNode> child1_1 = std::make_shared<TreeNode>("Python");
    child1->child1 = child1_1;
    std::shared_ptr<TreeNode> child1_2 = std::make_shared<TreeNode>("PHP");
    child1->child2 = child1_2;

    std::shared_ptr<TreeNode> child2 = std::make_shared<TreeNode>("COMPILED");
    tree->root->child2 = child2;
    std::shared_ptr<TreeNode> child2_1 = std::make_shared<TreeNode>("Rust");
    child2->child1 = child2_1;
    std::shared_ptr<TreeNode> child2_2 = std::make_shared<TreeNode>("C++");
    child2->child2 = child2_2;
}

int main(int argc, char** argv) {
    std::shared_ptr<Tree> tree = std::make_shared<Tree>("--- Programming Languages ---");
    build_tree(tree);

    std::cout << "Traversing the tree, standby!" << std::endl;
    tree->traverse();

    return 0;
}