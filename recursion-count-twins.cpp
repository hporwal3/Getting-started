#include <string>
#include <iostream>
using namespace std;
int count;
int twins (string & str)
{
  int  i;
  if (str.size () == 1)
    return 0;
  for (i = 0; i <= str.size ()-3; i++)
    {
      if (str.at (i) == str.at (i + 2))
	count++;

    }


return count;
}

int
main ()
{
  string text;
  getline (cin, text);
  twins (text);
  cout<<count;
}