#include <iostream>

// 定義二元樹節點的結構
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

// 插入新節點到二元樹中的函式
Node* insertNode(Node* root, int value) {
    // 如果樹是空的，則將新節點作為根節點
    if (root == nullptr) {
        root = new Node(value);
    }
    // 如果新值小於根節點的值，則插入到左子樹中
    else if (value < root->data) {
        root->left = insertNode(root->left, value);
    }
    // 如果新值大於或等於根節點的值，則插入到右子樹中
    else {
        root->right = insertNode(root->right, value);
    }
    return root;
}

// 前序遍歷二元樹的函式
void preOrderTraversal(Node* root) {
    if (root != nullptr) {
        std::cout << root->data << " ";  // 輸出根節點的值
        preOrderTraversal(root->left);   // 遞歸處理左子樹
        preOrderTraversal(root->right);  // 遞歸處理右子樹
    }
}

// 中序遍歷二元樹的函式
void inOrderTraversal(Node* root) {
    if (root != nullptr) {
        inOrderTraversal(root->left);   // 遞歸處理左子樹
        std::cout << root->data << " ";  // 輸出根節點的值
        inOrderTraversal(root->right);  // 遞歸處理右子樹
    }
}

int main() {
    Node* root = nullptr;

    // 插入節點到二元樹中
    root = insertNode(root, 8);
    root = insertNode(root, 3);
    root = insertNode(root, 10);
    root = insertNode(root, 1);
    root = insertNode(root, 6);
    root = insertNode(root, 14);
    root = insertNode(root, 4);
    root = insertNode(root, 7);
    root = insertNode(root, 13);

    // 前序遍歷二元樹並輸出節點的值
    std::cout << "前序遍歷二元樹: ";
    preOrderTraversal(root);
    std::cout << std::endl;


    // 中序遍歷二元樹並輸出節點的值
    std::cout << "中序遍歷二元樹: ";
    inOrderTraversal(root);
    std::cout << std::endl;

    return 0;
}
