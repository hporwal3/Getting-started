#include <iostream>
using namespace std;

void setrowzero(int arr[][100],int row,int col,int n)
{   
    for(int i=0;i<n;i++)
    { arr[row][i]=0;
    arr[i][col]=0;
    }
    
    
}

void checkrowzero(int arr[][100],int n)
{
	for (int i = 0; i < n; ++i)
	{ for(int j=0;j<n;j++)
		if(arr[i][j]==0) {setrowzero(arr,i,j,n);}
			else continue;
		
	}
}

void printoutput(int arr[][100],int n)
{
    
	
	for(int i=0;i<n;i++)
	{for(int j=0;j<n;j++)
	{ cout<<arr[i][j]<<" ";
	}cout<<'\n';}
}


int main() {
    int t;
    cin>>t;
    while(t--)
    {
	int n;
	cin>>n;
	int arr[100][100];
	for(int i=0;i<n;i++)
	{for(int j=0;j<n;j++)
	{ cin>>arr[i][j]; } }
	
	
    checkrowzero(arr,n);
	
	printoutput(arr,n);}
	return 0;
}