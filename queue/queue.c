#include<stdio.h>
#define Max 5
int arr[Max];
int rear=-1;
int front=-1;
void cerQuEnq(int n){
     if( front==-1 &&rear==-1){
        rear=front=0;
       arr[rear]=n;}
       
    else if((rear+1)%Max==front){
        printf("full");
    }
 else  rear=(rear+1)%Max;
 arr[rear]=n;
   

}
void deque() {
    if (front == -1 && rear == -1) { 
        printf("Queue is empty\n");
       
    }

    printf("Dequeued: %d\n", arr[front]); 

    if (front == rear) { 
        front = rear = -1; 
    } else {

        front = (front + 1) % Max; 
    }
}
//display for enque 
void display(){
    int i=front;
    if(front==-1&&rear==-1)
     printf("empty");
     while(i!=rear)
     {
        printf("%d",arr[i]);
        i=(i+1)%Max;
     }
     printf("%d",arr[rear]);

}

int main(){
    cerQuEnq(1);
 cerQuEnq(4);
   
    display();
    printf("\n");
    deque();
     deque();
     
      
}