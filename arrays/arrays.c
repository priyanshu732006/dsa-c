// #include <stdio.h> //sum and average in array
// void main()
// {
//     int a[5];
//     int sum=0;
//     int avg;
//     int i;
//     for( i=0;i<5;i++){
//     printf("\n enter the number %d",i+1);
//     scanf("%d",&a[i]);}
//     for(int j=0;j<5;j++){
//         sum+=a[j];}
//     avg=sum/5;
    
//     printf("%d\n",sum);
//     printf("%d",avg);
    
// }

// #include <stdio.h>
// void main()
// {
    
//     int max=0;
//     int min=9999;
//     int a[5];
//     int i;
//    for( i=0;i<5;i++){
//     printf("\n enter the number %d\n ",i+1);
//     scanf("%d",&a[i]);}
//     for(int i=0;i<5;i++){
//         if (max<a[i])
//         max=a[i];}
//         printf(" max=%d\n",max);

// for(int j=0;j<5;j++){
// if(min>a[j])
// min=a[j];}
// printf("min=%d",min);

// }

// #include<stdio.h>
// void main()
// {
//     int n,a[10],i=0,sum[10];
//     printf("enter the no\n");
//      scanf("%d,",&n);
//      if(n>10)
//      {
//         printf("invalid input");
//      }
//       a[0]=0;
//       a[1]=1;
//       if(n==0)
//       printf("%d",a[0]);
//       if(n==1){
//       printf("%d",a[0]);
//       printf("%d",a[1]);}
//       if(n>2)
//       printf("%d\n",a[0]);
//       printf("%d\n",a[1]);
//    for (int j = 0; j<n-2; j++)
//  {
//     sum[j]=a[i]+a[i+1];
//     a[i]=a[i+1];
//     a[i+1]=sum[j];
//  }
// for(i=0; i<n-2; i++){
//    printf("%d\n",sum [i]);
// }

// }
// }

// #include <stdio.h>
// int main (){
//    int n;
//    printf ("Enter n");
//    scanf ("%d",&n);
//    int a[n];
//    for (int j=0; j<n; j++){
//       printf ("n= ");
//       scanf ("%d", &a[j]);
//    }
//    for (int i=0; i<n; i++){
//       printf ("%d\n", a[i]);
//    }
// }
// #include <stdio.h>
// void greet(){
//     printf("hellow\n");
//     printf("hi\n");
//     return;
// }
// int main(){
//     for(int i=1;i<4;i++)
//     greet();
//     printf("good\n");
//     greet();
// }
// #include <stdio.h>
// void australia()
// {
//     printf("Australia\n");
//     return;
// }
// void America()
// {
//     printf("Amrica\n");
//     australia();
//     return;
// }
// int main()
// {
//     printf("india\n");
//     America();
//     return 0;
// }
// #include <stdio.h>
// int add(int a,int b)
// {     int sum=a+b;
//      return sum;
   
// }
// int main()
// {int a,b;
//     printf("enter the value of first no");
//     scanf("%d",&a);
//     printf("enter the second no");
//     scanf("%d",&b);
//     int sum=add(a,b);
//     printf("sum=%d ",sum);
//     return 0;
// }
// #include <stdio.h>
// int factorial (int x)
// {
//     int fact=1;
//     for(int i=1;i<=x;i++)
//     {
//       fact=fact*i;}
  
//     return fact ;
// }
// int main()
//  { 
//     int n,r;
//     printf("enter the value of n");
//     scanf("%d",&n);
//     printf("enter the value of r");
//     scanf("%d",&r);
//    int nfact=factorial(n);
//    int rfact=factorial(r);
//    int nrfact=factorial(n-r);
//  int ncr=factorial(n)/(factorial(r)*nrfact);
//   printf("fac=%d",ncr);
//     return 0;
// }

// #include<stdio.h>
// void swap(int*x,int*y)
// {
//      int temp;
// temp=*x;
// *x=*y;
// *y=temp;
// return;
// }
// int main()
// {
//     int a=5;int b=6;
// swap(&a,&b);
// printf("a=%d",a);
// printf("b=%d",b);
// return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int n,val,pos;
//     printf("enter the size of array");
//     scanf("%d",&n);
//     int a[n];
//     printf("enter the value of array");
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     printf("array orginal\n");
//     for(int i=0;i<n;i++)
//       printf("%d\n",a[i]);
//       printf("enter the vlaue to insert");   
//       scanf("%d",&val);
//        printf("enter the position");
//         scanf("%d",&pos);
//        if(pos>n){
//        printf("invalid");}
//     for(int i=n-1;i>=pos-1;i--)
// a[i+1]=a[i];
//     a[pos-1]=val;
//      printf("after insert\n");
//      for(int i=0;i<=n;i++)
//      printf("%d",a[i]);
//     return 0;
// }



// #include<stdio.h>
// int main()
// {int n,i; int val ,flag=0;

// printf("enter the size of array");
// scanf("%d",&n);
// int a[n];
// printf("enter value of araay");
//     for(int i=0;i<n;i++)
// scanf("%d",&a[i]);
// printf("orginal array");
// for(int i=0;i<n;i++)
// printf("%d",a[i]);
// printf("enter the valu to remove\n");
// scanf("%d",&val);
// for(int i=0;i<n;i++)
// if(a[i]==val){
// flag=1;
// break;}
// if(flag==0)
// printf("element not found");
// else{
// for(;i<n;i++)
// a[i]=a[i+1];}
// printf("after deletion");
// for(i=0;i<=n-1;i++)
// printf("%d\n",a[i]);

// }
    // #include<stdio.h>
    // void display(int a[], int n){
    // for( int i=0;i<n;i++)
    //   printf("%d",a[i]);
      
    // }
    // int insert(int a[], int m){
    //     if (m > sizeof (a[20]));
    //     {printf ("invalid");
    //     return ;}
    //     else
    //     {
    //         for (int i = 5; i >m; i-- ){
    //             a[i]= a[i+1];
    //         }
    //     }
        

    // //     printf("enter the value to insert");
    // //     scanf("%d",val);
    // //     if(val>=n)
    // //     printf("invalid");
    // //     else{
    // //     for(int i=n-1;i<pos-1;i--)
    // //  a[i+1]=a[i];
    // //  a[pos-1]=val;
    // //     }
    // //  return 1;

    // }
    // int main() {
    //     int n,m;
    //     int a[20] = {1,2,3,4,5}; // a[]= {1,2,60,3,4,5}
    //        printf("enter the value of array size");
    //        scanf("%d",&m);
    //         //   printf("enter the size of array ");
    //         //   scanf ("%d,"&n);
    //     //       display(&m,&n);
    //     //       display(m,n);
    //           return 0;
    // }

//  #include<stdio.h>
//  void display(int arr[],int n)
//  {
// for(int i=0;i<n;i++)
// printf("%d ",arr[i]);

//  }
//  int insertion(int arr[], int size, int index, int element,int capacity){
//     if(index>=capacity){
//     return -1;
//     }

//     for( int i=size-1;i>=index;i--){
//      arr[i+1]=arr[i];
//      }
//      arr[index]=element;
//      return 1;

//  }
// int main()
// {int arr[100]={1,2,3,4,8};
//  int size=5;
//  int index=3;
//  int element=6;
//   int capacity=100;
// display(arr,size);
// insertion(arr, size, index,element,capacity);
// size+=1;
// printf("\n after insertion\n");
// display(arr,size);

    
// }
// #include <stdio.h>
// void display(int a[],int n){
//   for(int i=0;i<n;i++)
//   printf("%d",a[i]);
//   printf("\n");
  
// }
//  int delete( int a[], int size ,int index ){
//   int i;
//   if(index>size){
//   return printf("invalid");}
//   for( i=index;i<size-1;i++){
//   a[i]=a[i+1];}
//   return 1;
// }

// int main()
// {int a[100]={1,2,3,4,7};
// int size=5;
// int capacity=100;
// int index=2;

// display(a,size);
//  delete(a,size,index );
//  size-=1;
//  display(a,size);
//  return 0;
// }

#include<stdio.h>
void display(int array[], int size)
{
  for (int i=0;i<size;i++)
  printf("%d",array[i]);

}
int searching(int array[],int size,int element){
  for(int i=0;i<size;i++)
  if (array[i]==element){
    return i;
}
      return-1;
    }



int main()
{
  int array[100]={1,4,6,8,5};
  int size =sizeof(array)/sizeof(int);
  int element=10;
 int search=searching(array,size,element);
printf("element %d is found at %d index",element,search);
return 0;
}