#include<iostream>
using namespace std;
struct Node{
    int data;
    Node*next;

};
void printlinked(Node*head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }

}

int main(){
    Node*head=NULL;
head->next=NULL;
head->data=10;

Node*node2=new Node();
head->next=node2;
head->data=20;

Node*node3=new Node();
node2->next=node3;
head->data=30;
printlinked(head);

}