// #include<stdio.h>
// #include<stdlib.h>
// struct Node{
//     struct Node*next;
//     int data;
// };
// struct Node*newnode(int data)
// { struct Node*node=(struct Node*)malloc(sizeof(struct Node));
//     node->data=data;
//     node->next=NULL;
//     return node;
// }
// void traverse(struct Node*head){
//     struct Node*ptr=head;
//     while(ptr!=NULL)
//     {
//         printf("%d",ptr->data);
//        ptr= ptr->next;
//     }
// }
// struct Node*insert(struct Node*head,int data){
//     struct Node*ptr=head;
//      struct Node*temp=newnode(data);
//     while(ptr->next!=NULL)
//     {
//         ptr=ptr->next;
//     }
   
//     ptr->next=temp;
//     return head;
// }




// int main(){
//     struct Node*head=newnode(10);
//     head->next=newnode(56);
//     head->next->next=newnode(57);
//     head->next->next->next=newnode(45);
//     printf("traversel");
//     traverse(head);
//     int data;
//     printf("enter the value  insert to ");
//     scanf("%d",&data);
//     head=insert(head,data);
//     printf("after insertion");
//     traverse(head);
// }
    //  at bigninng
    #include<stdio.h>
    #include<stdlib.h>
    struct Node{
        struct Node*next;
        int data;
    };
    void traverse(struct Node*head){
    struct Node*ptr=head;
    while(ptr!=NULL)
    {
        printf("%d",ptr->data);
       ptr= ptr->next;
    }
}


struct Node*newnode(int data){
    struct Node*node=(struct Node*)malloc(sizeof(struct Node));
     node->data=data;
     node->next=NULL;
    
}
struct Node*insertatB(struct Node*head,int data)
{   struct Node*temp=newnode(data);
    temp->next=head;
    head=temp;
    return head; 
}
int main(){
    struct Node*head=newnode(10);
    head->next=newnode(56);
    head->next->next=newnode(57);
    head->next->next->next=newnode(45);
    printf("traversel");
    traverse(head);
    int data;
    printf("enter the value  insert to ");
    scanf("%d",&data);
    head=insertatB(head,data);
    printf("after insertion");
    traverse(head);
}

