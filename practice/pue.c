#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct  node{
    struct node*next;
    int Roll_number;
    char* name;
    float CGPA;
};
  struct node* creatrnode(int roll,char name[30],float CGPA)
{
    struct node*newnode= (struct node*)malloc(sizeof( struct node));
    newnode->Roll_number=roll;
    newnode->name = (char *)malloc(strlen(name) + 1);
    strcpy(newnode->name, name);
    newnode->CGPA=CGPA;
    newnode->next=NULL;
    return newnode;
}
struct node*reverse_list(struct node*head)
{
    struct node* current;
    struct node*Next;
    struct node*prev=NULL;
    current=head;
    while(current!=NULL){
       Next=current->next;
       current->next=prev;
       prev=current;
       current=Next;
       
    }
    return prev;}
void display(struct node*head)
{  struct node*temp= head;

    while(temp!=NULL)
     {
        printf(" roll no: %d",temp->Roll_number);
       printf("%s",temp->name);
         printf("%f",temp->CGPA);
         printf("\n");
        temp=temp->next;
     }
}


void main()
{
    struct node*head=creatrnode(1,"Pradyumn",9.99);
    head->next=creatrnode(2,"shivam",10);
    head->next->next=creatrnode(3,"shikha",10);
    display(head);
   struct node* pre= reverse_list(head);
   printf("after reversing \n");
    display(pre);

}