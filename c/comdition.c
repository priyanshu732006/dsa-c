#include<stdio.h>
int main()
{
    int age;
    printf("enter the value:");
    scanf("%d",&age);
    if(age>=18)
    printf("you are adult");
    else if (age>13&&age<=18)
    printf("teenage"); 
    else
    printf("child");

}