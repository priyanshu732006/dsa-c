
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
void  linklisttravering(struct node*ptr){
    while (ptr!=NULL)
    {
      printf("element : %d\n",ptr->data);
      ptr=ptr->next;
    }

}
int main()
{//Pointer create
    struct node*head;
    struct node*second;
    struct node*third;
    struct node*fourth;
//node allocation at heap memory
    head=(struct node*)malloc(sizeof (struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof (struct node));
    fourth=(struct node*)malloc(sizeof(struct  node));

    head->data=7;
    head->next=second;
    second->data=8;
    second->next=third;
    third->data=4;
    third->next=fourth;
    fourth->data=6;
    fourth->next=NULL;
    linklisttravering(head);
    return 0;
}
