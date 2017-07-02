#include<bits/stdc++.h>
using namespace std;
struct node
{
    int key;
    struct node *left;
    struct node *right;
};
struct node *newnode(int k)
{
    struct node *node = new struct node;
    node->key=k;
    node->right=NULL;
    node->left=NULL;
    return node;
};

unsigned int countnode(struct node* root)
{
    if(root==NULL)
        return 0;
    return (1+countnode(root->left)+countnode(root->right));
}
bool iscomp (struct node* root , unsigned int index, unsigned int number_nodes)
{
    if(root == NULL )
        return (true);
    if(index >= number_nodes)
        return (false);
    return (iscomp(root->left,2*index+1,number_nodes) &&
            iscomp(root->right,2*index+2,number_nodes));
}
bool isheap(struct node *root)
{if(root->left == NULL && root->right==NULL)
    return(true);
if(root->right==NULL)
{
    return(root->key >= root->left->key);
}
else
    {
    if (root->key >= root->left->key &&
    root->key>=root->right->key)
    return((isheap(root->left))&&
    (isheap(root->right)));
    else
    return(false);
    }
}
bool isheaps(struct node* root)
{
    unsigned int node_count=countnode(root);
    unsigned int index=0;
    if(iscomp (root,index,node_count) && isheap(root))
        return (true);
    return (false);
}

int main()
{
   struct node* root = NULL;
    root = newnode(10);
    root->left = newnode(9);
    root->right = newnode(8);
    root->left->left = newnode(7);
    root->left->right = newnode(6);
    root->right->left = newnode(5);
    root->right->right = newnode(4);
    root->left->left->left = newnode(3);
    root->left->left->right = newnode(2);
    root->left->right->left = newnode(1);
    if (isheaps(root))
    printf("Given binary tree is a Heap\n");
    else
    printf("Given binary tree is not a Heap\n");
 return 0;

}
