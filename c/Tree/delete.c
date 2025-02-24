#include<stdio.h>
#include<stdlib.h>
struct Node{
    struct Node*left;
    struct Node*right;
    int data;
};
struct Node*min(struct Node*root){
     while(root->left!=NULL)
     root=root->left;
     return root;
}
struct Node*delete(struct Node*root,int data){
    if(root==NULL)
      return root;

     if(data<root->data) 
     root->left=delete(root->left,data);
     else if(data>root->data)
     root->right=delete(root->right,data);
     else
      {
        if(root->left==NULL){
        struct Node*temp=root->right;
        free(root);
         return temp;
      }
       else if(root->right==NULL){
        struct Node*temp=root->left;
        free(root);
        return temp;
      }
      struct Node*temp=min(root->right);
         root->data=temp->data;
         root->right=delete(root->right,temp->data);

      }
      return root;
}
struct Node*newnode(int data){
    struct Node*node=(struct Node*)malloc(sizeof(struct Node));
    node->data=data;
    node->left=node->right=NULL;
 }
struct Node* insert(struct Node* root, int data) {
    if (root == NULL) {
        return newnode(data);
    }
    if (data < root->data) {
        root->left = insert(root->left, data);
    } else if (data > root->data) {
        root->right = insert(root->right, data);
    }
    return root;
}

 void preorder(struct Node*ptr){
    if(ptr!=NULL){
    printf("%d",ptr->data);
    preorder(ptr->left);
    preorder(ptr->right);
    }
 }
 

int main(){
    struct Node*root=NULL;
  root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 70);
    root = insert(root, 60);
    root = insert(root, 80);
   printf("traverse");
   preorder(root);
   printf("\n");
   root=delete( root,50);
   root=delete(root,30);
   preorder(root);
}