// #include<iostream>
// using namespace std;
// struct Node{
// int data;
// Node*next;
// };
// int main()
// {
//  Node*head;
//  Node*first=new Node();
//  head=first;
//  first->data=10;
//  first->next=NULL;
//  Node*second=new Node();
//  first->next=second;
//  second->data=20;
//  second->next=NULL;
//  Node*temp=head;
//  while(temp!=NULL){
//  cout<< temp->data<<endl;
//  temp=temp->next;
//  }

// #include <iostream>
// using namespace std;
// struct node{
//     int data;
//     node*next;
//     node*prev;
// };
// int main()
// {
//      node*head;
//      node*first=new node();
//      head=first;
//      first->data=12;
//      node*second=new node();
//      second->data=30;
//      first->next=second;
//      second->prev=first;
//      node*temp=head;
// while(temp!=NULL){
// cout<<temp->data<<endl;
// temp=temp->next;
// }
//}

// #include <iostream>
// using namespace std;
// struct node{
//     int data;
//     node*next;
//     node*prev;
// };
// int main()
// {
//      node*head;
//      node*first=new node();
//      head=first;
//      first->data=20;
//      node*second=new node();
//      first->next=second;
//      second->data=30;
//      second->prev=first;
//      second->next=NULL;
//      node*third=new node();
//      third->data=1;
//      third->next=NULL;
//      node*temp=head;
//      while(temp!=NULL){
//      cout<<temp->data<<endl;
//      temp=temp->next;

//      }
// }

#include <iostream>
using namespace std;
struct node{
int data;
node*next;
};
int main(){
   
    node*head;
    node*first=new node();
    head=first;
    first->data=5;
    first->next= NULL;
    node*second=new node();
    first->next=second;
    second->data=3;
    second->next=NULL;
    node*newnode=new node();
    second->next=newnode;
     int n;
    cout<<"enter the value of n";
    cin>>n;
    head=newnode;
    newnode->data=n;
    newnode->next=first;
    second->next=NULL;

    node*temp=new node();
    temp=head;
    while(temp!=0)
    cout<<temp->data <<endl;
    temp=temp->next;





}
