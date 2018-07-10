#include <iostream>
using namespace std;
void printprime(int m,int n)
{ int i,flag;
while(m<n)
        {flag = 0;
        for(i = 2; i <= m/2; ++i)
        {
            if(m % i == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            cout << m<<" ";
        ++m;
    }
}
int main()
{
   
    int t;
    int a[10][2];
    cin>>t;
    for(int start=0;start<t;start++)
    { cin>>a[start][0];
    cin>>a[start][1];
    printprime(a[start][0],a[start][1]);
        cout<<'\n';
    }
    return 0;
}
