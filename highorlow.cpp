//Himanshu Porwal
#include<iostream>
#include<stdlib.h>
using namespace std;

void highorlow(int guess,int randomNumber)
{
  if(guess==randomNumber)
  	cout<<"you guessed correctly";
  else if(guess<randomNumber) cout<<"high";
  else cout<<"low";

}

int main()
{  
  int randomNumber,guess;
  cout<"enter a number";
  cin>>guess;
  randomNumber=rand() % 100 + 1;
  highorlow(guess,randomNumber);
	return 0;

}