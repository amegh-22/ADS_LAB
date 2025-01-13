#include <stdio.h>
#include <stdlib.h>
void insert();
void display();
void inorder();
void postorder();
void preorder();
void delete();
void search();
struct node
{
    int data;
    struct node *right;
    struct node *left;
};
struct node *root = NULL;
struct node *newnode;
struct node *current;

void main()
{
    while (1)
    {
        int choice;
        printf("\n---menu---\n1.insert\n2.delete\n3.display\n4.search\n5.exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            insert();
            break;
        case 2:
            delete ();
            break;
        case 3:
            display();
            break;
        case 4:
            search();
            break;
        case 5:
            exit(0);
        default:
            printf("invalid choice");
        }
    }
}

struct node *insertion(struct node *root, struct node *newnode)
{
    if (root == NULL)
    {
        root = newnode;
    }
    else if (root->data < newnode->data)
    {
        root->right = insertion(root->right, newnode);
    }
    else
    {
        root->left = insertion(root->left, newnode);
    }
    return root;
}

void insert()
{

    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the element to insert:");
    scanf("%d", &newnode->data);
    newnode->right = NULL;
    newnode->left = NULL;
    root = insertion(root, newnode);
}

struct node *min(struct node *root)
{
    while (root->left != NULL)
    {
        root = root->left;
    }
    return root;
}

struct node *deletion(struct node *root, int value)
{
    if (root == NULL)
    {
        printf("Tree is empty");
    }
    if (value < root->data)
    {
        root->left = deletion(root->left, value);
    }
    else if (value > root->data)
    {
        root->right = deletion(root->right, value);
    }
    else
    {

        if (root->right == NULL)
        {
            current = root->left;
            free(root);
            return current;
        }
        else if (root->left == NULL)
        {
            current = root->right;
            free(root);
            return current;
        }
        else
        {
            root->data = min(root->right)->data;

            root->right = deletion(root->right, root->data);
        }
    }
}

void delete()
{
    int value;
    printf("Enter the element to delete:");
    scanf("%d", &value);
    root = deletion(root, value);
}
void display()
{
    printf("inorder:");
    inorder(root);
    printf("\n");

    printf("preorder:");
    preorder(root);
    printf("\n");
    printf("postorder:");
    postorder(root);
    printf("\n");
}

void inorder(struct node *root)
{
    if (root == NULL)
    {

        return;
    }
    else
    {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

void preorder(struct node *root)
{
    if (root == NULL)
    {

        return;
    }
    else
    {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(struct node *root)
{
    if (root == NULL)
    {

        return;
    }
    else
    {

        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}

void search()
{
    int ser,flag=0;
    printf("enter the element to search");
    scanf("%d", &ser);
    current = root;
    while (current != NULL)
    {
        if (current->data == ser)
        {
            printf("element found");
            flag=1;
            break;
        }
        else if (current->data > ser)
        {
            current = current->left;
        }
        else
        {
            current = current->right;
        }
    }
    if(!flag)
    {
    printf("element not found");
    }
}