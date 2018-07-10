#include <iostream>
using namespace std;
void printodd(int n)
{  if(n%2==0)
{for(int i=n-1;i>0;i-=2)
{
cout<<i<<endl;} }
else
{for(int i=n;i>0;i-=2)
{cout<<i<<endl;}
}
}
void printeven(int n)
{
if(n%2==0)
{for(int i=2;i<n;i+=2)
{cout<<i<<endl;} }
else
{
for(int i=2;i<n-1;i+=2)
{cout<<i<<endl;}
}
}
int main()
{

	int n;
	cin>>n;
	printodd(n);
	printeven(n);
}