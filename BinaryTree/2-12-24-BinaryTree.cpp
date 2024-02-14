#include <iostream>

using namespace std;



// Define a structure for a binary tree node

struct Node {

    int data;

    struct Node* left, * right;

};



// Function to create a new binary tree node with given data

Node* newNode(int data) {

    // Allocate memory for a new node

    Node* temp = new Node;

    // Set the data of the new node

    temp->data = data;

    // Set both left and right child pointers to NULL initially

    temp->left = temp->right = NULL;

    // Return the pointer to the new node

    return temp;

}



// Function to print the binary tree recursively with indentation for better visualization

void printTreeRecursive(Node* root, int level = 0) {

    // Base case: if the root is NULL, return

    if (root == NULL)

        return;



    // Print right subtree, increasing the level by 1

    printTreeRecursive(root->right, level + 1);



    // Print current node with appropriate indentation

    for (int i = 0; i < level; ++i)

        cout << " "; // Two spaces for each level of indentation

    cout << root->data << endl;



    // Print left subtree, increasing the level by 1

    printTreeRecursive(root->left, level + 1);

}



// Main function

int main() {

    // Create the binary tree

    Node* root = newNode(1);

    root->left = newNode(2);

    root->right = newNode(3);

    root->left->left = newNode(4);

    root->left->right = newNode(5);

    root->left->right->left = newNode(9);

    root->right->left = newNode(6);

    root->right->right = newNode(7);

    root->right->right->left = newNode(15);



    // Print the binary tree with proper indentation for visualization

    cout << "Binary Tree:" << endl;

    printTreeRecursive(root);



    // Return 0 to indicate successful termination of the program

    return 0;

}