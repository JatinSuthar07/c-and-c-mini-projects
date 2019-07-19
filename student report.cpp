#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
FILE *fp;
struct student
{
	int rn,mob, phy, eng, chem, cse;
	float per;
	char name[25];
}s[50];

void insert();
void display();
void search();
void Delete();
void update();

void data(int);


int main()
{
 	int n;
 	a:
 	printf("\n press 1 to insert student's data.");
	printf("\n press 2 to display student's data.");
	printf("\n press 3 to search student's data.");
	printf("\n press 4 to delete student's data.");
	printf("\n press 5 to update student's data.");
 	scanf("%d",&n);
 	system("cls");
 	switch(n)
 	{
 		case 1: fp=fopen("data.txt","w");
		        insert();
 				system("cls");
 				
 				fclose(fp);
				goto a;
		 		break;
		case 2: display();
				getch();
				system("cls");
				goto a;
				break;
		case 3: search();
		        getch();
				system("cls");
				goto a;
				break;
		case 4: Delete();
				goto a;
				break;
		case 5: update();
				goto a;
				break;
 		case 0:break;
 		default : printf("\n unvalid option");
 				  system("cls");
 				  goto a;
 				  break;
 		
	 }
 }
void insert()
{
	int n;
	printf("\n Number of student's data to be enter  \n");
	scanf("%d",&n);
	system("cls");
	fp=fopen("data.txt","w");
	for(int i=0;i<n;i++)
	{
		printf("\n  roll no. - ");
		scanf("%d",&s[i].rn);
		
		
		printf("\n  name of student - ");
		scanf("%s",s[i].name);
		
		
		printf("\n  marks in english - ");
		scanf("%d",&s[i].eng);
		
		
		printf("\n marks in maths/bio - ");
		scanf("%d",&s[i].mob);
		
		
		printf("\n marks in chemistry - ");
		scanf("%d",&s[i].chem);	
			
		
		printf("\n marks in physics - ");
		scanf("%d",&s[i].phy);
		
		
		printf("\n marks i computer science - ");
		scanf("%d",&s[i].cse);	
		
		
		fwrite(&s[i],sizeof(s[i]),1,fp);
	}
	
	fclose(fp);
}
void data(int n)
{		fp=fopen("data.txt", "r");
		
		
		for(int i =0;i<50;i++)
	    {	fread(&s[i],sizeof(s[i]),1,fp);
		 if(s[i].rn==n)
	    	
			
			{
			printf("\n  roll no. - %d",s[i].rn);
	
	
			printf("\n  name of student - %s",s[i].name);
		
		
			printf("\n  marks in english - %d",s[i].eng);
		
	
			printf("\n marks in maths/bio - %d",s[i].mob);
		
	
			printf("\n marks in chemistry - %d",s[i].chem);
		
	
			printf("\n marks in physics - %d",s[i].phy);
		
		
			printf("\n marks in computer science - %d",s[i].cse);
			}
			
		}
	fclose(fp);
}
void display()
{
	int r,f;
	printf("\n enter roll no. of student of whose data to be display  ");
	scanf("%d",&r);
	fp=fopen("data.txt","r");
	for(int i=0;i<50;i++)	
	{ fread(&s[i],sizeof(s[i]),1,fp);
		
		if(s[i].rn == r)
			{
			data(s[i].rn);
			
			f=1;
			getch();
			break;
			}
	}
	if(f!=1)
	{
		printf("\n entered roll no. doesn't exist ");	
	}	
}
void search()
{
	int r,t,f;
	printf("\n enter roll no. of student of whose data to be display  ");
	scanf("%d",&r);
	fp=fopen("data.txt","r");
	for(int i=0;i<50;i++)	
	{ fread(&s[i],sizeof(s[i]),1,fp);
		
		if(s[i].rn == r)
			{
			data(s[i].rn);
			t=s[i].chem+s[i].cse+s[i].mob+s[i].phy+s[i].eng;
			s[i].per=t/5;
			printf("\n percentage - %.2f",s[i].per);
			f=1;
			getch();
			break;
			}
	}
	if(f!=1)
	{
		printf("\n entered roll no. doesn't exist ");	
	}	
}


void Delete()
{
	int i;
	printf("\n enter the roll no. of student to be delete - ");
	scanf("%d ",&i);
	fp=fopen("data.txt","w+");
	fread(&s[i],sizeof(s[i]),1,fp);
		
		if(s[i].rn == i)
		{	
		s[i].rn=0;
		goto b;
		}
		else
		{
		 printf("\n student data of this roll no. doesn't exit");
	goto b;
}	b:
	fclose(fp);
}

void update()
{
	int i,x;
	printf("\n Number of student's data to be updated  \n");
	scanf("%d",&i);
	system("cls");
	fp=fopen("data.txt","w");
	top:
		printf("\n press 1 to update roll  no.");
		printf("\n press 2 to update name.");
		printf("\n press 3 to update  chem");
		printf("\n press 4 to update cse.");
		printf("\n press 5 to update mob");
		printf("\n press 6 to update phy");
		printf("\n press 7 to update eng");
		printf("\n 0.Return ");
		scanf("%d",&x);
        
	switch(x)
{
    case 1:		printf("\n  roll no. - ");
		        scanf("%d",&s[i].rn);system("cls");printf("\nData updated\n");
		        goto top;
		
	case 2:	printf("\n  name of student - ");
		scanf("%s",s[i].name);system("cls");printf("\nData updated\n");
		goto top;
		
	case 3:	printf("\n  marks in english - ");
		scanf("%d",&s[i].eng);system("cls");printf("\nData updated\n");
		goto top;
		
	case 4: printf("\n marks in maths/bio - ");
		scanf("%d",&s[i].mob);system("cls");printf("\nData updated\n");
		goto top;
		
	case 5:	printf("\n marks in chemistry - ");
		scanf("%d",&s[i].chem);	system("cls");printf("\nData updated\n");
			goto top;
		
	case 6:	printf("\n marks in physics - ");
		scanf("%d",&s[i].phy);system("cls");printf("\nData updated\n");
		goto top;
		
	case 7:	printf("\n marks i computer science - ");
		scanf("%d",&s[i].cse);system("cls");printf("\nData updated\n");	goto top;
	case 0:system("cls"); break;
	}
		
		fwrite(&s[i],sizeof(s[i]),1,fp);
	fclose(fp);
}

