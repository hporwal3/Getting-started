#include<iostream>
using namespace std;
void printodd(int n)
{ int num=n;
	if (n<=0)
		return;
if(n/2==0)
	num=n-1;
cout<<num<<endl;
printodd(n-2);



}
void printeven(int n,int i)
{ 
int num=n;

if (i>n)
	return;
if(n/2==0)
	num=n;
else
	num=n-1;
cout<<num-i<<endl;
i=i+2;
printeven(n,i);




}
int main()
{ int i=0;
	int n;
	cin>>n;                  //if n=8 o/p is 7 5 3 1  2 4 6 8   n=9 9 7 5 3 1 2 4 6 8
printodd(n);
printeven(n,i);

}