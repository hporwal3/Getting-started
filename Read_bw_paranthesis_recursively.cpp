#include <string>
#include <iostream>
using namespace std;
string para(string str, char beg, char end)
{
    int begPos ;
    if ( (begPos = str.find(beg)) != string::npos )
    {
        int endPos ;
        if ( (endPos = str.find(end, begPos)) != string::npos && endPos != begPos+1 )
            return str.substr(begPos+1, endPos-begPos-1) ;
    }
}


int main()
{
    string original;
    
    getline(cin,original);
    cout << para(original, '(', ')') << '\n' ;
}