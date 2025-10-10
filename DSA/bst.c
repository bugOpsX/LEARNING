#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *left, *right;
} Node;

// Function to create a new node
Node* createNode(int value) {
    Node* newNode = (Node*) malloc(sizeof(Node));
    newNode->data = value;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// Insert value in BST
Node* insert(Node* root, int value) {
    if (root == NULL) 
        return createNode(value);
    if (value < root->data)
        root->left = insert(root->left, value);
    else if (value > root->data)
        root->right = insert(root->right, value);
    return root;
}

// Search a value in BST
Node* search(Node* root, int value) {
    if (root == NULL || root->data == value)
        return root;
    if (value < root->data)
        return search(root->left, value);
    return search(root->right, value);
}

// Find minimum value (used in delete)
Node* findMin(Node* root) {
    while (root->left != NULL) 
        root = root->left;
    return root;
}

// Delete a node from BST
Node* deleteNode(Node* root, int value) {
    if (root == NULL) 
        return root;

    if (value < root->data)
        root->left = deleteNode(root->left, value);
    else if (value > root->data)
        root->right = deleteNode(root->right, value);
    else {
        // Node with one or no child
        if (root->left == NULL) {
            Node* temp = root->right;
            free(root);
            return temp;
        } 
        else if (root->right == NULL) {
            Node* temp = root->left;
            free(root);
            return temp;
        }
        // Node with two children
        Node* temp = findMin(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

// Inorder Traversal (Left, Root, Right)
void inorder(Node* root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

// Preorder Traversal (Root, Left, Right)
void preorder(Node* root) {
    if (root != NULL) {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

// Postorder Traversal (Left, Right, Root)
void postorder(Node* root) {
    if (root != NULL) {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}

int main() {
    Node* root = NULL;
    int choice, value;

    while (1) {
        printf("\n\n===== Binary Search Tree (BST) =====");
        printf("\n1. Insert");
        printf("\n2. Search");
        printf("\n3. Delete");
        printf("\n4. Inorder Traversal");
        printf("\n5. Preorder Traversal");
        printf("\n6. Postorder Traversal");
        printf("\n7. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to insert: ");
                scanf("%d", &value);
                root = insert(root, value);
                break;
            case 2:
                printf("Enter value to search: ");
                scanf("%d", &value);
                if (search(root, value))
                    printf("✅ Value Found!\n");
                else
                    printf("❌ Value Not Found!\n");
                break;
            case 3:
                printf("Enter value to delete: ");
                scanf("%d", &value);
                root = deleteNode(root, value);
                printf("🗑️ Value Deleted (if existed)\n");
                break;
            case 4:
                printf("Inorder: ");
                inorder(root);
                break;
            case 5:
                printf("Preorder: ");
                preorder(root);
                break;
            case 6:
                printf("Postorder: ");
                postorder(root);
                break;
            case 7:
                printf("👋 Exiting...\n");
                exit(0);
            default:
                printf("❗ Invalid choice!\n");
        }
    }
    return 0;
}
