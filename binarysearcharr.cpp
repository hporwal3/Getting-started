#include<iostream>
using namespace std;


int binarysearch(int a[],int m,int be,int end)
{
  int mid;
while(be<=end)
{
mid=be+(end-be)/2;
 if(a[mid]==m)
  return mid;
 else if(a[mid]<m)
    be=mid+1;
else end=mid-1;
}
return -1;

}
int main()
{
int arr[50];
int n,m;
cout<<"enter the size of array";
cin>>n;
cout<<"enter the number to find";

for(int i=0;i<n;i++)
{cin>>arr[i];
}
cin>>m;
cout<<binarysearch(arr,m,0,n-1);

}