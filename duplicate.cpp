#include<iostream>
#include<string>
using namespace std;

string duplicate(string s, int len, int i)
{
    if (s[i] == '\0')
        return s;
    if (s[i] == s[i - 1])
    {
        s.insert(i, "*");
        return duplicate(s, len + 1, i + 1);
    }

    else
        return duplicate(s, len, i + 1);
    return s;
}


int main()
{
	string str;
	getline(cin,str);
	int len=str.length();
    cout<<duplicate(str,len,0);
}