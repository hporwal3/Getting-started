#include<iostream>
using namespace std;
int bubble(int a[],int n)
{
 int temp;
 for(int k=0;k<n-1;k++)
 {
    for(int j=0;j<n-k-1;j++)
    {
    	if(a[j]>a[j+1])
    		{temp=a[j];
    	    a[j]=a[j+1];
    	    a[j+1]=temp;}

    }

 }
  
  return a[n];
}
int main()
{
	int a[50];
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
		{cin>>a[i];}
	bubble(a,n);
	for(int j=0;j<n;j++)
	{
		cout<<a[j]<<" ";
	}

}

