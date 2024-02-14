#include <iostream> // Include the input/output stream library for standard input and output operations
using namespace std; // Use the standard namespace to avoid writing 'std::' before standard library functions

// Define a structure for a binary tree node
struct Node {
    int data; // Data stored in the node
    struct Node* left, * right; // Pointers to left and right child nodes
};

// Function to create a new node with given data
Node* newNode(int data) {
    Node* temp = new Node; // Allocate memory for a new node
    temp->data = data; // Set the data of the new node
    temp->left = temp->right = NULL; // Set left and right pointers to NULL
    return temp; // Return the newly created node
}

// Function to print binary tree recursively in postorder traversal
void printTreePostorder(Node* root) {
    if (root == NULL) // Base case: If the current node is NULL (empty subtree), return
        return;
    printTreePostorder(root->left); // Recursively traverse the left subtree
    printTreePostorder(root->right); // Recursively traverse the right subtree
    cout << root->data << " "; // Print the data of the current node
}

int main() {
    Node* root = newNode(1); // Create the root node with data 1
    root->left = newNode(2); // Create the left child of the root with data 2
    root->right = newNode(3); // Create the right child of the root with data 3
    root->left->left = newNode(4); // Create the left child of the left child of the root with data 4
    root->left->right = newNode(5); // Create the right child of the left child of the root with data 5
    root->left->right->left = newNode(9); // Create the left child of the right child of the left child of the root with data 9
    root->right->left = newNode(6); // Create the left child of the right child of the root with data 6
    root->right->right = newNode(7); // Create the right child of the right child of the root with data 7
    root->right->right->left = newNode(15); // Create the left child of the right child of the right child of the root with data 15
    
    cout << "Binary Tree (Postorder traversal):" << endl; // Print a message indicating the type of traversal
    printTreePostorder(root); // Print the binary tree in postorder traversal
    
    return 0; // Return 0 to indicate successful completion of the program
}
