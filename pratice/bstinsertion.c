struct node *current;
struct node *insertion(struct node *root, struct node *newnode)
{
    if (root == NULL)
    {
        root = newnode;
    }
    else if (root->data > newnode->data)
    {
        root->left = insertion(root->left, newnode);
    }
    else
    {
        root->right = insertion(root->right, newnode);
    }
    return root;
}

void insert()
{
    newnode = (struct node *)malloc(sizeof(struct node))
        printf("enter the element to insert ");
    scanf("%d", newnode->data);
    root = insertion(root, newnode);

    root = deletion(root, x)
}

struct node *deletion(struct node *root, int x)
{
    if (root == NULL)
    {
        return root;
    }
    if (x < root->data)
    {
        root->left = deletion(root->left, x);
    }
    else if (x > root->data)
    {
        root->right = deletion(root->right, x);
    }
    else
    {
        if (root->left == NULL)
        {
            temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            temp = root->left;
            free(root);
            return temp;
        }
        else
        {
            struct node *pre;
            pre = successor(root);
            root->data = pre->data;
            root->right = deletion(root->right, pre->data);
        }
    }
    return root;
}

struct node *successor(struct node *root)
{
    root = root->right;
    while (root->left != NULL)
    {
        root = root->left;
    }
    return root;
}

struct node *searching(structint x)
{
    int flag = 0;

    flag = 1;
    break;
}
else if (dat > root->data)

{
    root->right = searching(root->right, x);
}
else
{
    root->left = searching(root->left, x)
}
}

void search(struct node *root)
{
    printf("Enter the elementb to search:");
    scanf("%d", &dat);
    current = root;
    while (current != NULL)
    {
        if (current->data == data)
        {
            printf("element found");
            return;
        }
        else

        {
            if (dat < current->data)
            {
                current = current->left;
            }
            else
            {
                current = current->right;
            }
        }
    }

    printf("element no found;");
}