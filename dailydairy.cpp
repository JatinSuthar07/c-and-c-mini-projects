#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<fstream>
#include<ctime>

using namespace std;
fstream user;
ofstream diary;
string fname="jatin";
string pname="jatin";
class daily
{
	string name,date;
	char data[1000],ch;
	public:
		void add();
		void view();
};
int sign_in();
void sign_up();
void remove1();
void remove2();
main()
{	
	daily d;
	int a,b,c;
	b:
	cout<<"\n\n\n\n\n\n\t\t\t\t\**********************************************************";
	cout<<"\n\t\t\t\t*\t\t                        \t\t *\n";
	cout<<"\t\t\t\t*\t\t WELCOME TO DAILY DAIRY\t\t\t *\n";
	cout<<"\t\t\t\t*\t\t                        \t\t *\n";
	cout<<"\t\t\t\t\**********************************************************";
	cout<<"\n 1. SIGN IN.\n 2. SIGN UP \n3. REMOVE USER";
	cin>>a;
	system("cls");
	switch (a)
	{
		case 1:b=sign_in();
		if(b==2)
		 	{
			cout<<"\n Sorry you are not a user\n please Sign Up";
			getch();
			system("cls");
			goto b;
			}
		else
				system("cls");
		  		break;
		case 2:sign_up();
		system("cls");
		goto b;
		case 3:system("cls");
			remove1();
			remove2();
			system("cls");
			goto b;
			break;
		default :exit(0);
		break;
	}
	a:
	cout<< "\n1. ADD DIARY\n 2. VIEW DIARY \n3.REMOVE DATA";
	cin>>a;
	switch(a)
	{
		case 1:
		system("cls");
		 d.add();
		system("cls");	
		goto a;
		break;
		case 2:d.view();
		break;
		case 3:system("cls");
			remove2();
			goto b;
			break;
		default: system("cls");
		goto b;
	}
	
	
	getch();
}
int sign_in()
{	
	string pname;
	char uname[20],upass[8];
	cout<<"enter your name \n";
	cin>>pname;
	cout<<"enter your user name";
	cin>>uname;
	cout<<"\n password";
	cin>>upass;
	user.open(pname.c_str(),ios::in);
	char name[20],pass[10];
	fname=pname+"1";
	user>>name;
	user>>pass;
	if(strcmp(uname,name)==0&&strcmp(upass,pass)==0)
	{
		getch();
		return 1;
	}
	else 
	 	{getch();return 2;}
	user.close();	
}
void sign_up()
{	string name;
	char uname[20],pass[10],dob[10],place[20];
	cout<<"\n Name:";
	cin>>name;
	user.open(name.c_str(),ios::out);
	cout<<"\n Enter your user name:";
	cin>>uname;
	cout<<"\npass: ";
	cin>>pass;
	cout<<"\nDate of Birth: ";
	cin>>dob;
	cout<<"\nPlace: ";
	cin>>place;
	user<<uname<<"\n";
	user<<pass<<"\n";
	user<<dob<<"\n";
	user<<place<<"\n";
	user.close();
}
void daily::add()
{
			time_t t=time(NULL);
			char *ct=ctime(&t);
		        cout<<"enter date in dd/mm/yyyy format only:";
		        cin>>date;
			diary.open(fname.c_str(),ios::app);
			cout<<ct;
			cout<<"\n enter your today's dairy";
			gets(data);
			gets(data);
			diary.seekp(ios::end,ios::beg);
			diary<<"\n"<<date;
			diary<<data<<"\n";
			diary<<"\n /n ";
			diary.close();
}
void daily::view()
{	
	string data;
	ifstream diary;
	diary.open(fname.c_str(),ios::in);
	while(!diary.eof())
	{
		diary>>data;
		if(data=="/n")
		{
			cout<<"\n";
		}
		cout<<data<<" ";
		
	}	
}	
void remove1()
{
	if(remove(pname.c_str())==0)
	{
		cout<<"\n file is deleted successfully"	;
		getch();
	}
	else;
	cout<<"\n file doesn't exist";
	getch();		
}	void remove2()
{
	if(remove(fname.c_str())==0)
	{
		cout<<"\n file is deleted successfully"	;
		getch();
	}
	else;
	cout<<"\n file doesn't exist";
	getch();		
}	
