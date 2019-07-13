#include <stdio.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node* createNode(int value)
{
    struct node* newNode=malloc(sizeof(struct node));
    newNode->data=value;
    newNode->left=NULL;
    newNode->right=NULL;
}
struct node *insert(struct node* root,int value)
{
    if(root==NULL)
    {
       return createNode(value);
    }
    if(value<root->data)
    {
        root->left=insert(root->left,value);
    }
    else if(value>root->data)
    {
        root->right=insert(root->right,value);
    }
}
void inorder(struct node* root)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->left);
    printf("%d ->",root->data);
    inorder(root->right);
}
int main()
{
  struct node *root=NULL;
  root=insert(root,8);
  insert(root, 3);
  insert(root, 1);
  insert(root, 6);
  insert(root, 7);
  insert(root, 10); 
  insert(root, 14);
  insert(root, 4);
  inorder(root);
    return 0;
}
