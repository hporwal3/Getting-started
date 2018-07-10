#include <iostream>
using namespace std;
int main() {
   int m,n,t;
   cin>>t;
   cin>>m>>n;
   while(t--)
   {
       for(int i=2;i<n;i++)
       if(n%i==0)
       break;
       else cout<<n;
   }
   return 0;
}
