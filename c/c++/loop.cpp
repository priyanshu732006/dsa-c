// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"enter the value";
//     cin>>n;
//     int i;
//     for(i=1;i<=n;i++)
//     if(i%2==0)
// {
//     cout<<i<<endl;
// }
// }

// #include <iostream>
// using namespace std;
// int main(){
// int i;
// for(i=19;i<=190;i+=19)
// cout<<i<<endl;
// }
//  #include <iostream>
//  using namespace std;
//  int main()
//  {
//     int n;
//     cout<<"enter the value";
//     cin>>n;
//     int a=4;
//     for(int i=1;i<=n;i++)
//     {
//         cout<<a<<endl;
//         a=a*2;
//     }
//  }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"enter the value";
//     cin>>n;
//     int a=100;
//     int i;
// for(i=1;i<=n;i++){
// cout<<a<<endl;
// a=a-3;

// }
// }
// #include <iostream>
// using namespace std;
// int main()
// {
//     int i=65;
//     while(i<=90){
//     cout<<(char)i<<" "<<i<<endl;
//     i++;
// }
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     int count=0;
//     cout<<"enter the value";
//     cin>>n;
// int a=n;
// while(n>0){
//     n/=10; 
//     count++;
// }
// if(a==0)
// cout<<1;
// else
// cout<<count;
// }
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"enter the value";
//     cin>>n;
//     int r=0;
//      int l=0;
   
//     while(n>0)
//     {
//       r=r*10;
//       l=n%10;
//       r=l+r;
//       n=n/10;
//     }
// cout<<r;
// }

// #include  <iostream>
// using namespace std;
// int main()
// { int f;
//     int n;
//     cout<<"enter the value";
//     cin>>n;
// int p=1;
//     for(int i=1;i<=n;i++){
//     p=p*i;}
//     cout<<p;
// }
// fabonacci series
// #include <iostream>
// using namespace std;
// int main(){
// int n;
// int sum;
// cout<<"enter the value";
// cin>>n;

//     int a=1,b=1;
//     for(int i=1;i<=(n-2);i++)
//     {
// sum=a+b;
// a=b;
// b=sum;

//     }
// #include <iostream>
// using namespace std;
// int main(){
// int n;
// cout<<"enter the value of n";
// cin>>n;
// int m;
// cout<<"enter the value of m";
// cin>>m;

//     for (int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=m;j++)
//       {cout<<"*";}
//       cout<<endl;
//     }

// }
// #include <iostream>
// using namespace std;
// int main()

// {
//     int row;
//     int col;
//     int n;
//     cout<<"enter the value of row";
//     cin>>row;
//     cout<<"enter the value of colom";
//     cin>>col;
//     for (int i=1;i<=row;i++)
//     {
//         for(int j=1;j<=col;j++)
//         {cout<<j;}
//         cout<<endl;
//     }
   
// } 

// # include<iostream>
// using namespace std;
// int main()
// {
//      int n;
//      cout<<"enter the value of n";
//      cin>>n;
  
//  for (int i=1;i<=n;i++){
//  for(int j=n;j>=i;j--) 
//  {
//     cout<<"*";
//  }
//  cout<<endl;
//  } 
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     for (int i=1;i<=4;i++)
//     {int a=1;
//         for (int j=1;j<=i;j++)
//         { cout<<a;
//           a+=2;
        
//         }
//         cout<<endl;
//     }
// }
 
// #include <iostream>
// using namespace std;
// int main()
// {
//     for(int i=1;i<=4;i++)
//     {int k=65;
//         for(int j=4;j>=i;j--)
//        { cout<<char(k);
//           k++; }
//          cout<<endl;
//     }
    
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     for(int i=1;i<=5;i++)
// {
//     for(int j=1;j<=5;j++){
//     if(i==3||j==3)
//     cout<<"*";
//     else
//     cout<<"#";}
//     cout<<endl;

// }
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     for(int i=1;i<=5;i++)
// {
//     for(int j=1;j<=5;j++)           *   *
//     if(i==j || i+j==6)                *
//     cout<<"*";                      *   *
//     else
//     cout<<" ";
//     cout<<endl;
// }
// }
// #include <iostream>
// using namespace std;
// int main()
// {    @  
//     @@
//    @@@
//   @@@@
//  @@@@@
//     for( int i=1;i<=5;i++){
//         for (int j=5;j>=i;j--)
//       cout<<" ";                          
        
//         for(int k=1;k<=i;k++)
//         cout<<"@";
//         cout<<endl;
//   }
    
// }
