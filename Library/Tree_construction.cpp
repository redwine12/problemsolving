#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#pragma warning(disable:4996)
#include <string>
#include <sstream>
#include <math.h>
#define endl '\n'
#define MAX

using namespace std;
typedef long long ll;

// 이진 탐색 트리 노드 정의
struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val) : data(val), left(nullptr), right(nullptr) {}
};

// 이진 탐색 트리 삽입
TreeNode* insert(TreeNode* root, int val) {
    if (root == nullptr) {
        root = new TreeNode(val);
        return root;
    }

    if (val < root->data)
        root->left = insert(root->left, val);
    else if (val > root->data)
        root->right = insert(root->right, val);

    return root;
}

// 이진 탐색 트리 삭제
TreeNode* deleteNode(TreeNode* root, int key) {
    if (root == nullptr)
        return root;

    if (key < root->data)
        root->left = deleteNode(root->left, key);
    else if (key > root->data)
        root->right = deleteNode(root->right, key);
    else {
        if (root->left == nullptr) {
            TreeNode* temp = root->right;
            delete root;
            return temp;
        } else if (root->right == nullptr) {
            TreeNode* temp = root->left;
            delete root;
            return temp;
        }

        TreeNode* temp = root->right;
        while (temp->left != nullptr)
            temp = temp->left;

        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

// BST 중위 순회 (In-order traversal)
void inOrderTraversal(TreeNode* root) {
    if (root == nullptr)
        return;
    inOrderTraversal(root->left);
    cout << root->data << " ";
    inOrderTraversal(root->right);
}

// BST 전위 순회 (Pre-order traversal)
void preOrderTraversal(TreeNode* root) {
    if (root == nullptr)
        return;
    cout << root->data << " ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

// BST 후위 순회 (Post-order traversal)
void postOrderTraversal(TreeNode* root) {
    if (root == nullptr)
        return;
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout << root->data << " ";
}

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(nullptr);

    TreeNode* root = nullptr;

    // BST - 삽입
    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 70);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 60);
    root = insert(root, 80);

    cout << "트리 중위 순회: ";
    inOrderTraversal(root);
    cout << endl;

    cout << "트리 전위 순회: ";
    preOrderTraversal(root);
    cout << endl;

    cout << "트리 후위 순회: ";
    postOrderTraversal(root);
    cout << endl;

    // BST - 삭제
    root = deleteNode(root, 30);

    cout << "삭제 후 트리 중위 순회: ";
    inOrderTraversal(root);
    cout << endl;

    return 0;
}
