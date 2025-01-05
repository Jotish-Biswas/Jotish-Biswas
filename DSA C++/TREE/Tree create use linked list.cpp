/* create treee with linked list and traverse the tree acroding to inorder(LRR),Preorder(RoLR),postorder(LRRo)
*/

#include<bits/stdc++.h>
using namespace std ;

// Define the structure for a node
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Function to create a new node
struct Node* create() {
    int n;
    cout<<"Enter data (-1 for no node): " ;
    cin>>n;

    // If input is -1, return NULL (no node)
    if (n == -1) {
        return NULL;
    }

    // Allocate memory for the new node
    Node* newNode = new Node() ;
    newNode->data = n;

    // Create left and right subtrees recursively
    printf("Enter left child of %d:\n", n);
    newNode->left = create();

    printf("Enter right child of %d:\n", n);
    newNode->right = create();

    return newNode;
}

// Function to perform Preorder Traversal (Root-Left-Right)
void Preorder(struct Node* root) {
    if (root == NULL) {
        return;
    }

    printf("%d ", root->data);        // Print the data of the node
    Preorder(root->left);   // Traverse the left subtree
    Preorder(root->right);  // Traverse the right subtree
}
// Inorder : Left - root - right 
void Inorder(Node* root)
{
    if(root==NULL) return ;
    Inorder(root->left) ;
    cout<<root->data<<" " ;
    Inorder(root->right) ;
}
// Postorder : Left-right - root 
void Postorder(Node* root)
{
    if(root==NULL) return ;
    Postorder(root->left) ;
    Postorder(root->right) ;
    cout<<root->data<<" ";
    
}

int main() {
    struct Node* root = NULL;

    // Create the tree
    cout<<"Create the binary tree: "<<endl;
    root = create();

    // Perform Preorder Traversal
    printf("Preorder Traversal (Root-Left-Right):\n");
   // Preorder(root);
   // Inorder(root) ;
   Postorder(root) ;
    return 0;
}
