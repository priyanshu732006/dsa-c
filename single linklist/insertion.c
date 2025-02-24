// #include <stdio.h>
// #include<stdlib.h>
// struct node{
//     int data;
//     struct node*next;
// };
// void traversing(struct node * ptr)
// {
//     while(ptr!=NULL){
//     printf("element:%d \n",ptr->data);
//     ptr=ptr->next;
//     }
//     }
// struct node*insertion(struct node*head,int data){
//         struct node*newnode=(struct node*)malloc(sizeof(struct node));
//         newnode->next=head;
//         newnode->data=data;

//         return newnode;

// }
// int main()
// {
//  struct node*head=(struct node*)malloc(sizeof(struct node));
//  struct node*second=(struct node*)malloc(sizeof(struct node));
//  struct node*third=(struct node*)malloc(sizeof(struct node));
//  struct node*fourth=(struct node*)malloc(sizeof(struct node));

//  head->data=5;
//  head->next=second;
//  second->data=9;
//  second->next=third;
//  third->data=5;
//  third->next=fourth;
//  fourth->data=22;
//  fourth->next=NULL;

//  traversing(head);
//  int data;
//  printf("enter the value to insert\n");
//  scanf("%d",&data);
//   head=insertion(head,data);
//   traversing(head);

// return 0;

// }
// #include<stdio.h>
// #include<stdlib.h>
// struct node{
//     int data;
//     struct node*next;
// };
//  void traversing(struct node*ptr){
//     while(ptr!=NULL){
//     printf("element:%d\n",ptr->data);
//     ptr=ptr->next;}
//  }
//  struct node* insertbetween(struct node* ptr,int index,int data){
//     struct node*newnode=(struct node*)malloc(sizeof(struct node));
//     int i=0;
//     while(i!=index-1){
//     ptr=ptr->next;
//     i++;
//     }
//     newnode->data=data;
//     newnode->next=ptr->next;
//     ptr->next=newnode;
//     return ptr;
//  } 
//  int main()
//  {
//     struct node*head=(struct node*)malloc(sizeof(struct node));
//     struct node*second=(struct node*)malloc(sizeof(struct node));
//     struct node*third=(struct node*)malloc(sizeof(struct node));
//     struct node*fourth=(struct node*)malloc(sizeof(struct node));

//     head->data=34;
//     head->next=second;
//     second->data=55;
//     second->next=third;
//     third->data=44;
//     third->next=fourth;
//     fourth->data=33;
//     fourth->next=NULL;

//     traversing(head);
//     int index;
//     int data;
//     printf("enter the index");
//     scanf("%d",&index);
//     printf("enter the value ");
//       scanf("%d",&data);
//     insertbetween(head,index,data);
//     traversing(head);

//  }

//  #include <stdio.h>
//  #include<stdlib.h>
//  struct Node{
//    int data;
//    struct Node*next

//  };
//  void travering(struct Node*ptr)
//  {    
//    while(ptr!=NULL)
//    {
//       printf("element:%d\n",ptr->data);
//       ptr=ptr->next;
//    }

//  }
//  struct Node*insertend(struct Node*head,int data ){
//  struct Node*newnode=(struct Node*)malloc(sizeof(struct Node));
//  newnode->data=data;
//  struct Node*p=head;
//  while(p->next!=NULL){
//    p=p->next;
//  }
//  p->next=newnode;
//  newnode->next=NULL;
//  return head;
  

//  }
// int main()
// {
//   struct Node*head=(struct Node*)malloc(sizeof(struct Node));
//   struct Node*second=(struct Node*)malloc(sizeof(struct Node));
//   struct Node*third=(struct Node*)malloc(sizeof(struct Node));
//   struct Node*fourth=(struct Node*)malloc(sizeof(struct Node));
//   struct Node*five=(struct Node*)malloc(sizeof(struct Node));

//   head->data=55;
//   head->next=second;
//   second->data=44;
//   second->next=third;
//   third->data=33;
//   third->next=fourth;
//   fourth->data=22;
//   fourth->next=five;
//   five->data=11;
//   five->next=NULL;

//   travering(head);
//   int data;
//    printf("enter the value ");
//       scanf("%d",&data);
//       insertend(head,data);
//       travering(head);

// }