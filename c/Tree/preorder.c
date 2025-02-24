#include<stdio.h>
#include<stdlib.h>
struct Node{
    struct Node *left;
    struct  Node *right;
    int data;
};
 struct Node* newnode(int data)
{
    struct Node * node = (struct Node*)malloc(sizeof(struct Node));
     node->data=data;
     node->left=node->right=NULL;
     return node;

}

void preorder(struct Node* ptr){
    if(ptr!=NULL)
    {
        printf("%d," ,ptr->data);
        preorder(ptr->left);
        preorder(ptr->right);
    }
}
int main(){
    struct Node*root= newnode(10);
    root->left= newnode(2);
    root->right= newnode(3);
    root->left->left=newnode(4);
     root->left->right=newnode(5);
      root->right->left=newnode(6);
       root->right->right=newnode(7);

       printf("traversal of tree  ");
       preorder(root);

    
}
