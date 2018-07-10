#include <iostream>
#include<string>
#include<cmath>
using namespace std;

void printHanoiSteps(int n, string src, string dest, string helper) {
    if (n == 0) return;

    printHanoiSteps(n - 1, src, helper, dest);
    cout << "move "<<n << "th " <<"disc from "<< src <<" to "<< dest << endl;
    printHanoiSteps(n - 1, helper, dest, src);
}

int main() {
    int n;
     cin>>n; 
    printHanoiSteps(n, "T1", "T2" , "T3");
    cout<<pow(2, n)-1;
}