#pragma once
#include <vector>
#include <memory>
#include <string>

#include <iostream>

namespace LibCB {

class TreeNode {
    public:
        std::string contents;
        std::shared_ptr<TreeNode> child1 = nullptr;
        std::shared_ptr<TreeNode> child2 = nullptr;

        TreeNode(std::string contents) {
            this->contents = contents;
        }

        void visit() {std::cout << this->contents << std::endl;}
};

class Tree {
    public:
        std::shared_ptr<TreeNode> root = nullptr;

        Tree(std::string contents) {
            this->root = std::make_shared<TreeNode>(contents);
        }

        void traverse(const std::string order="order") {
            if (order == "order") {
                in_order_traversal(root);
            } else if (order == "pre") {
                pre_order_traversal(root);
            }   else if (order == "post") {
                post_order_traversal(root);
            }
        }

    private:
        void in_order_traversal(std::shared_ptr<TreeNode> node) {
            if (node != nullptr) {
                in_order_traversal(node->child1);
                node->visit();
                in_order_traversal(node->child2);
            }
        }

        void pre_order_traversal(std::shared_ptr<TreeNode> node) {
            if (node != nullptr) {
                node->visit();
                pre_order_traversal(node->child1);
                pre_order_traversal(node->child2);
            }
        }

        void post_order_traversal(std::shared_ptr<TreeNode> node) {
            if (node != nullptr) {
                post_order_traversal(node->child1);
                post_order_traversal(node->child2);
                node->visit();
            }
        } 
};

};