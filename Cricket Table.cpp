#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
void line();
void star();
struct cricketer
{
	char name[15];
	int runs;
	int innings;
	int tno;
	float avg;
};
int main()
{
	int runs,innings, i;
	float avg;
	cricketer rec[5];
	cout<<"\nEnter 5 records includeing following details\n";
	cout<<"1)	Player's Name\n";
	cout<<"2)	Runs\n";
	cout<<"3)	Innings\n";
	cout<<"4)	Times not out \n\n";
	for(i=0;i<5;i++)
	{
		cout<<"\nEnter Player Name:-";
		cin>>rec[i].name;
		cout<<"\nEnter Runs:-";
		cin>>rec[i].runs;
		cout<<"\nEnter innings:-";
		cin>>rec[i].innings;
		cout<<"\nEnter Time not out:-";
		cin>>rec[i].tno;
		rec[i].avg=float(rec[i].runs)/rec[i].innings;
	}
	cout<<"\n\n\n";
	cout<<setw(49)<<"CRICKETER'S TABLE\n";
	line();
	cout<<setw(15)<<"Player's Name"<<setw(15)<<"Runs"<<setw(15)<<"innings";
	cout<<setw(20)<<"Times not out"<<setw(12)<<"Average\n";
	line();
	for(i=0;i<5;i++)
	{
		cout<<setw(15)<<rec[i].name<<setw(15)<<rec[i].runs<<setw(12)<<rec[i].innings;
		cout<<setw(18)<<rec[i].tno<<setw(16)<<rec[i].avg<<endl;
	}
	line();
	cout<<endl<<endl<<endl;
	star();
	cout<<setw(43)<<"Finish\n";
	star();
	getch();
}
void line()
{
	for(int i=1;i<=41;i++)
		cout<<"--";
	cout<<endl;
}
void star()
{
	for(int i=1;i<=41;i++)
		cout<<"**";
	cout<<endl;
}
