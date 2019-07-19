#include<iostream>
#include<conio.h>
#include<string.h>
#include<fstream>
using namespace std;
fstream dairy;
class daily
{
	char x[1000],r[100],name[20],place[20],d[13],sd[13];
		int l;
		public:
		
	void addreminder ();
		void display_entry(int c);
	//	void edit_entry();
};
void daily::addreminder()
{
		
	cout<<"\ndate(dd/mm/yyyy) :";
	cin>>d;
	
	cout<<"\nName: "<<endl;
	cin>>name;
	cout<<"place: "<<endl;
	cin>>place;
	cout<<"enter your dairy dairy:"<<endl;
	gets(r);
	
	dairy.open("data.txt",ios::out|ios::app|ios::ate);
	
	dairy<<d<<"\n";
        dairy<<name<<"\n";
        dairy<<place<<"\n";
        for(int i=0;i<l;i++)
        dairy<<r<<"\n";
        dairy.close();
      
        
}

void daily::display_entry(int c)
{
	cout<<"\nenter the date of which data to be display ";
	cin>>sd;
	
	dairy.open("data.txt",ios::in);
	
	dairy>>d;
        dairy>>name;
        dairy>>place;
        dairy>>r;
      
	cout<<name<<endl;
        cout<<place<<endl;
        cout<<d<<endl;
        
    dairy.close();
	
	
}

main()
{       daily dd;
	char x;
	int c=0,i=1;
	
	do
	{
		dd.addreminder();
		cout<<" do you want to add more press y for yes and n for no ";
		cin>>x;
		i++;
			
	}while(x=='y');
	
	dd.display_entry(i);
	getch();
	
}
