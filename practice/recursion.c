// #include<stdio.h>
// void print(int x ,int n, int sum){
//     if(x==5){
//         sum+=x;
//         printf("%d",sum);
//         return;}
//         sum+=x;
//   print(x+1,n,sum);
  
// }
// int main(){
//     int x=1;
//     int sum;
//     print(x,5,0);
// }

// #include<stdio.h>
// int fact(int n)
// {
//     if(n==1){
//         return 1;
//     }
//     int factnm=fact(n-1);
//     int facto=n*factnm;
//     return facto;
// }
// int main(){
//     int x=1;
//     int factorial=fact(x);
//     printf("%d",factorial);
// }

#include<stdio.h>
void fibo(int a,int b,int n )
{
    if(n==0){
        return;
    }
    int c=a+b;
    printf("%d",c);
    fibo(b,c,n-1);
}
int main(){
    int a=0;
    int b=1;
    int n=5;
    printf("%d",a);
     printf("%d",b);
fibo(a,b,n-2);
}
