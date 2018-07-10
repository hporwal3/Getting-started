#include<iostream>
using namespace std;
void printTriangle (int n)
{
 if (n==1)
 cout<<" * "<<endl;

 else if(n>1)
 {   int i;
 	 printTriangle(n-1);
     for (i=0;i<n;i++)
     cout<<" * ";
     cout<<endl;
   
 }
}
int main()
{
    int n;
    cin>>n;
    printTriangle(n);
}