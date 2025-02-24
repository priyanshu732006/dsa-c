

                        //   *** bubble shot***
#include<stdio.h>
#include<stdbool.h>

void swap(int*x,int*y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
void bubble(int a[],int n)
{int i,j;
 bool swapped; 
    for ( i=0;i<n-1;i++)
    { swapped=false;
        for( j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1]){
            swap(&a[j],&a[j+1]);
            swapped=true;}
        }
        if(swapped==false)
            break;
    }

}
void print(int a[],int size){
    for(int i=0;i<size;i++)
{
    printf("%d\n",a[i]);
}
}
int main(){
    int arr[]={30,4,5,7,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    bubble(arr,n);
    printf("shorted array \n");
    print(arr,n);
}

// #include <stdio.h>

// /* Function to sort array using insertion sort */
// void insertionSort(int arr[], int n)
// {
//     for (int i = 1; i < n; ++i) {
//         int key = arr[i];
//         int j = i - 1;

//         /* Move elements of arr[0..i-1], that are
//            greater than key, to one position ahead
//            of their current position */
//         while (j >= 0 && arr[j] > key) {
//             arr[j + 1] = arr[j];
//             j = j - 1;
//         }
//         arr[j + 1] = key;
//     }
// }

// /* A utility function to print array of size n */
// void printArray(int arr[], int n)
// {
//     for (int i = 0; i < n; ++i)
//         printf("%d ", arr[i]);
//     printf("\n");
// }

// // Driver method
// int main()
// {
//     int arr[] = { 12, 11, 13, 5, 6 };
//     int n = sizeof(arr) / sizeof(arr[0]);

//     insertionSort(arr, n);
//     printArray(arr, n);

//     return 0;
// }

// #include <stdio.h>

// void selectionSort(int arr[], int n) {
//     for (int i = 0; i < n - 1; i++) {
      
//         int min_idx = i;
        
//         for (int j = i + 1; j < n; j++) {
//             if (arr[j] < arr[min_idx]) {
              
//                 min_idx = j;
//             }
//         }
        
       
//         int temp = arr[i];
//         arr[i] = arr[min_idx];
//         arr[min_idx] = temp;
//     }
// }

// void printArray(int arr[], int n) {
//     for (int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
// }

// int main() {
//     int arr[] = {64, 25, 12, 22, 11};
//     int n = sizeof(arr) / sizeof(arr[0]);
    
//     printf("Original array: ");
//     printArray(arr, n);
    
//     selectionSort(arr, n);
    
//     printf("Sorted array: ");
//     printArray(arr, n);
    
//     return 0;
// }
                 // bubble by me
// #include<stdio.h>
// #include<stdbool.h>
//  void swap(int*x,int*y)
// {
//     int temp= *x;
//     *x=*y;
//     *y=temp;
// }
// void bubble(int a[],int n)
// {
//     int i,j;
//     bool swapped;
//     for(i=0;i<n-1;i++){
//         swapped=false;
//       for(j=0;j<n-1-i;j++)
//       {
//          if(a[j]>a[j+1])
//          {
//             swap(&a[j],&a[j+1]);
//             swapped=true;
//          }
//       }
//         if(swapped==false)
//          break;

//     }
// }
// void traversing(int a[],int n){
    
//     for(int i=0;i<n;i++)
//      scanf("%d",&a[i]);
// }
// void display(int a[],int n)
// {
//     for(int i=0;i<n;i++)
//      printf("%d\n",a[i]);
// }
// int main(){
//     int n;

//     printf("enter the size of array");
//     scanf("%d",&n);
//         int a[n];
//     printf("enter the array element\n");
//     traversing( a,n);
//     printf("traversing of aarry");
//     bubble(a,n);
//     display(a,n);
// }

// #include<stdio.h>
// void insertion(int a[],int n){ 
//     int i,j,temp;
//     for ( i=0;i<n;i++)
//       {
//          temp=a[i];
//         j=i-1;
//       while(j>=0 && a[j]>temp){
//           a[j+1]=a[j];
//           j--;
//       }
//       a[j+1]=temp;

// }}
// void print(int a[],int n){
//     for (int i=0;i<n;i++)
//     printf("%d\n",a[i]);

// }
// int main(){
//     int A[]={2,6,8,2,6};
//     int  n=sizeof(A)/sizeof(A[0]);
//     print(A,n);
//     insertion(A,n);
//     printf("after insertion");
//      print(A,n);
// }

//     //selection sort
// #include<stdio.h>
// void input(int A[],int n){
//     printf("enter the integers\n");
//      for(int i=0;i<n;i++)
//      scanf("%d",&A[i]);
// }

// void display(int A[],int n)
// {   
//     for (int i=0;i<n;i++)
//     printf("%d\n",A[i]);
// }
// void swap(int *x,int*y){
//     int temp=*x;
//     *x=*y;
//     *y=temp;
// }





// void Selection(int A[],int n){
//     int i,j,min;
//     for(i=0;i<n-1;i++)
//     { int min=i;
//         for(j=i+1;j<n;j++){
//         if(A[j]<A[min])
//           min=j;
//         }
//         swap(&A[i],&A[min]);
//     }

// }
// int main(){
//     int n=5;
//   int A[n];
//     input(A,n);
//     printf("befor shorting");
//     display(A,n);
//     Selection(A,n);
//     printf("After shorting\n");
//     display(A,n);


// }

         //   quick sort
// #include<stdio.h>
// void input(int A[],int n ){
// printf("enter the element\n");
// for(int i=0;i<n;i++)
// scanf("%d",&A[i]);
//  }
//  void display(int A[],int n)
//  {
//     for(int i=0;i<n;i++)
//      printf("%d\n",A[i]);
//  }
//   void swap(int*x,int*y)
//   {
//      int temp=*x;
//      *x=*y;
//      *y=temp;
//   }
//  int partition(int A[],int lb,int ub)
//  {   int pivot=A[lb];
//      int start=lb;
//     int end=ub;
//     while(start<end){
//         while(A[start]<=pivot &&start<=ub)
//         start++;
//          while (A[end]>pivot)
//          {
//             end--;
//          }
//          if(start<end)
//          {
//            swap(&A[start],&A[end]);
//          }  
//     } 
//       swap(&A[lb], &A[end]);
//       return end;  
//     }
//  void Quick( int A[],int lb,int ub)
//  { if(lb<ub)
//  {   
//     int loc=partition(A,lb,ub);
//     Quick(A,lb,loc-1);
//     Quick(A,loc+1,ub);
//  }
//  }
//  int main(){
//     int n=5;
//     int lb=0;
//     int ub=n-1;
//     int A[n];
//     input(A,n);
//     printf("display of element\n");
//     display(A,n);
//     Quick(A,lb,ub);
//     printf("After sort\n");
//     display(A,n);
//  }

         //   merge short

// #include <stdio.h>
// void merge(int A[], int lb, int mid, int ub) {
//     int n1 = mid - lb + 1;
//     int n2 = ub - mid;

//     int left[n1], right[n2];

//     for (int i = 0; i < n1; i++)
//         left[i] = A[lb + i];
//     for (int i = 0; i < n2; i++)
//         right[i] = A[mid + 1 + i];

//     int i = 0; 
//     int j = 0; 
//     int k = lb; 

//     while (i < n1 && j < n2) {
//         if (left[i] <= right[j]) {
//             A[k] = left[i];
//             i++;
//         } else {
//             A[k] = right[j];
//             j++;
//         }
//         k++;
//     }

//     while (i < n1) {
//         A[k] = left[i];
    //     i++;
    //     k++;
    // }

//     while (j < n2) {
//         A[k] = right[j];
//         j++;
// //         k++;
//     }
// }

// void mergeSort(int A[], int lb, int ub) {
//     if (lb < ub) {
//         int mid = lb + (ub - lb) / 2;

//         mergeSort(A, lb, mid);

//         mergeSort(A, mid + 1, ub);

//         merge(A, lb, mid, ub);
//     }
// }

// void input(int A[], int n) {
//     printf("Enter the elements:\n");
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &A[i]);
//     }
// }

// void display(int A[], int n) {
//     for (int i = 0; i < n; i++) {
//         printf("%d\n", A[i]);
//     }
// }

// int main() {
//     int n = 5;
//     int lb = 0;
//     int ub = n - 1;
//     int A[n];

//     input(A, n);

//     printf("Display of elements before sorting:\n");
//     display(A, n);

//     mergeSort(A, lb, ub);

//     printf("\nAfter sorting:\n");
//     display(A, n);

//     return 0;
// }
          
        //   Radix sort
// #include<stdio.h>
//  int countsort(int A[],int n, int pos){
//      int count[n]={0};
//      for(int i=0;i<n-1;i++)
//      {
//         ++count[(A[i]/pos)%10];
//      }
//      for(int i=1;i<n-1;i++){
//         count[i]=count[i]= count [n-1];
//      }
//      for(int i=n-1;i>0;i--)
//      {
//        int B [++count[(A[i]/pos)%10]]=A[i];
//      }
// } 









// void Radix(int A[],int n){
//     int max( A, n);
//     for( int pos=1;max/pos > 0; pos*=10)
//     {
//         countsort(int A[],int n,int pos){

//         }
//     }

// }  
// int main(){
//     int n;
// }
    
//     #include <stdio.h>
// #include <stdlib.h>

// int getMax(int arr[], int n) {
//     int max = arr[0];
//     for (int i = 1; i < n; i++) {
//         if (arr[i] > max) {
//             max = arr[i];
//         }
//     }
//     return max;
// }

// void countingSort(int arr[], int n, int exp) {
//     int output[n];
//     int count[10] = {0};

//     for (int i = 0; i < n; i++) {
//         int digit = (arr[i] / exp) % 10;
//         count[digit]++;
//     }

//     for (int i = 1; i < 10; i++) {
//         count[i] += count[i - 1];
//     }

//     for (int i = n - 1; i >= 0; i--) {
//         int digit = (arr[i] / exp) % 10;
//         output[count[digit] - 1] = arr[i];
//         count[digit]--;
//     }

//     for (int i = 0; i < n; i++) {
//         arr[i] = output[i];
//     }
// }

// void radixSort(int arr[], int n) {
//     int maxVal = getMax(arr, n);
//     for (int exp = 1; maxVal / exp > 0; exp *= 10) {
//         countingSort(arr, n, exp);
//     }
// }

// void printArray(int arr[], int n) {
//     for (int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
// }

// int main() {
//     int arr[] = {170, 45, 75, 90, 802, 24, 2, 66};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     printf("Original array: ");
//     printArray(arr, n);

//     radixSort(arr, n);

//     printf("Sorted array: ");
//     printArray(arr, n);

//     return 0;
// }
