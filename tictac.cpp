#include<iostream>
#include<utility>

using namespace std;



void outputdesign(char arr[])
{
 	
	cout<<"------------------- "<<endl;
	cout<<"|  "<<arr[0]<<"   |  "<<arr[1]<<"   |  "<<arr[2]<<endl;
	cout<<"|      |      |   |     "<<endl;
	cout<<"------------------- "<<endl;
	cout<<"|  "<<arr[3]<<"   |  "<<arr[4]<<"   |  "<<arr[5]<<endl;
	cout<<"|      |      |   |     "<<endl;
	cout<<"------------------- "<<endl;
	cout<<"|  "<<arr[6]<<"   |  "<<arr[7]<<"   |  "<<arr[8]<<endl;
	cout<<"|      |      |   |     "<<endl;
}

void decidewinner(char arr[])
{ if((arr[1]==arr[4] && arr[4]==arr[7]) || (arr[2]==arr[5] && arr[5]==arr[8])|| (arr[3]==arr[6] && arr[6]==arr[9])|| (arr[1]==arr[2] && arr[2]==arr[3])|| (arr[4]==arr[5] && arr[5]==arr[6])||(arr[7]==arr[8] && arr[8]==arr[9])||(arr[1]==arr[5] && arr[5]==arr[9])||(arr[3]==arr[5] && arr[5]==arr[7]))
cout<<"winner";
else 
outputdesign(arr);
}
void canplace(char arr[],int placeat,char symbol)
{  
    if(arr[placeat-1]=='X' or arr[placeat-1]=='O')
    	cout<<"choose another position ";
    else arr[placeat-1]=symbol;
    decidewinner(arr);
   

}




int main()
{ 	char arr[9]={};
int placeat;
char p1symbol,p2symbol, symbol;
int id;

	cout<<"player1 choose your symbol X or O"<<endl;
	cin>>p1symbol;

	p2symbol=(p1symbol=='X')?'O':'X';
	cout<<"enter the position you want to enter and your player id(1 for p1, 2 for p2)";
	cin>>placeat>>id;
	symbol=(id==1)?p1symbol:p2symbol;
	canplace(arr,placeat,symbol);
    return 0;




	
}