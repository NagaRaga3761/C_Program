

#include<stdio.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node* createElement(int value)
{
    struct node* newNode=malloc(sizeof(struct node));
    newNode->data=value;
    newNode->left=NULL;
    newNode->right=NULL;
}
struct node* insertLeft(struct node *root,int value)
{
    root->left=createElement(value);
}
struct node* insertRight(struct node *root,int value)
{
    root->right=createElement(value);
}
void main()
{
    struct node *root=createElement(1);
    insertLeft(root,2);
    insertRight(root,3);
    printf("\t%d\n%d\t\t%d",root->data,root->left->data,root->right->data);
}










