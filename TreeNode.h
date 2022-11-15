#pragma once

#include <vector>
#include "WebElement.h"

using std::vector;

namespace CBLib {

class TreeNode {
    public:
        TreeNode(bool root_node, TreeNode* parent, WebElement payload_in);

        WebElement payload;

    private:
        bool is_root_node;
        TreeNode* parent_node;
        vector<TreeNode> child_nodes;

        
};

};

using CBLib::TreeNode;