#include<stdio.h>
#include<stdlib.h>
struct Node{
    struct Node* left ;
    struct Node* right;
    int data;
};
struct Node*newnode(int data){
    struct Node*node=(struct Node*)malloc(sizeof(struct Node));
    node->left=node->right=NULL;
    node->data=data;
    return node;
}
 struct Node*insert( struct Node*root,int data){
    if(root==NULL){
        return newnode(data);
    }
    if(data<root->data)
    {
       root->left=insert(root->left,data);
    }
    else if(data>root->data)
    {
        root->right=insert(root->right,data);
    }
    return root;
 }
 void preorder(struct Node*ptr){
    if(ptr!=NULL){
      printf("%d",ptr->data);
      preorder(ptr->left);
      preorder(ptr->right);}
 }
 int main(){
    struct Node*root=NULL;
    root=insert(root,50);
      root = insert(root, 30);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 70);
    root = insert(root, 60);
    root = insert(root, 80);
    printf("preorder traversal after inserting");
    preorder(root);
 }
