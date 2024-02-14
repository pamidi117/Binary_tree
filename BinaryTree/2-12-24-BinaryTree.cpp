#include <iostream> // Include the input/output stream library for standard input and output operations
using namespace std; // Use the standard namespace to avoid writing 'std::' before standard library functions

// Define a structure for a binary tree node
struct Node {
    int data; // Data stored in the node
    struct Node* left, * right; // Pointers to left and right child nodes
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
    Node* root = newNode(1); // Create the root node with data 1
    root->left = newNode(2); // Create the left child of the root with data 2
    root->right = newNode(3); // Create the right child of the root with data 3
    root->left->left = newNode(4); // Create the left child of the left child of the root with data 4
    root->left->right = newNode(5); // Create the right child of the left child of the root with data 5
    root->left->right->left = newNode(9); // Create the left child of the right child of the left child of the root with data 9
    root->right->left = newNode(6); // Create the left child of the right child of the root with data 6
    root->right->right = newNode(7); // Create the right child of the right child of the root with data 7
    root->right->right->left = newNode(15); // Create the left child of the right child of the right child of the root with data 15
    // Print the binary tree with proper indentation for visualization
    cout << "Binary Tree:" << endl; // Print a message indicating the start of the binary tree visualization
    printTreeRecursive(root); // Print the binary tree recursively with proper indentation
    // Return 0 to indicate successful termination of the program
    return 0;
}
