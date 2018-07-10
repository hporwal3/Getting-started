#include<iostream>

#include<string>
using namespace std;


void swap(char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void printdictionary(char a,string word)
{






}
void permute(char *a,int be,int end,string word)
{ 
    if(be==end)
    {

    printdictionary(a,word);
    }
    
    
    else
    { for (int i=be;be<=end;i++)
    {
        swap((a+be),(a+i));
        permute(a,be+1,end,word);
        swap((a+be),(a+i));
    }
    
    }
    }

int main()
{  int end;
    
    
     char str[100]; 
     const char original[100];




    strcpy(char_array, word.c_str()); 

    getline(cin,word);
    end=word.length();
    permute(char_array,0,end-1,word);
    
    
}