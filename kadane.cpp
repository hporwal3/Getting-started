#include<iostream>
using namespace std;
int main()
{
 int n;
 cin>>n;
 
 int a[100];
 int temp=0;
 int csum[100];
 int maxsum[100];
 cin>>a[0];
 if(a[0]<0)
 {csum[0]=0;
 maxsum[0]=0;}
 else
 {csum[0]=a[0];
 maxsum[0]=a[0];
 temp=a[0];}
 for(int i=1;i<n;i++)
 {
   cin>>a[i];
   temp+=a[i];
   csum[i]=temp;
   if(csum[i]>max[i-1])
  { max[i]=csum[i];}
   else max[i]=max[i-1];



 }
 cout<<max[n-1];
return 0;
}