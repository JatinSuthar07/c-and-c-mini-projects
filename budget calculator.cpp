#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
FILE *ptr;
struct income
{
	 long donation=0, grant=0,customer=0;
}i;
struct Expense
{
   long account=0,conference=0,bank=0,office=0,print=0,rent=0,travel=0,net=0;	
}Ex;
void admin();
void income();
void donation();
void grant();
void customer();
void Account();
void Conferences();
void Bank_charges();
void Office();
void Printing();
void Rent();
void Travel();
void Internet();
void expense();
void view();
void modify_data();
void modify_income();
void modify_expense();
int modify(long);
int main()
{
  int x;
  
  printf("\n\n\n\n\n\n\n====================================== BUDGET CALCULATOR========================");
  admin();
	system("cls");
  printf("\n\n\n\n\n\n\n\n********************************************TECHNOSOFT************************");
	getch(); 
  	
  
  main:
  	printf("\npress 1 to add income\n");
	printf("press 2 to add expenses\n");
	printf("press 3 to view total \n");
	printf("press 4 to modify data\n");
	printf("press 0 to exit\n");
	scanf("%d",&x);
	system("cls");
	switch(x)
	{
		case 1:
			income();
			system("cls");
		
			goto main;
			break;
		case 2:
			expense();
		
			system("cls");
			goto main;
			break;
	    case 3:
			view();
			goto main;
			break;
		case 4:
			modify_data();
			goto main;
			break;
		case 0: exit(0);
			break;
			
		default : 
		    printf("\n invalid option");
			system("cls");
		    goto main;
			break;
	}
}
void donation()
{	ptr=fopen("income","w");
	printf("Enter the income from donation\t");
	scanf("%ld",&i.donation);
	fprintf(ptr,"%ld\n",i.donation);
			fclose(ptr);
	printf("\n\n DATA SAVED");
}
void grant()
{	ptr=fopen("income","w");
	
	printf("Enter the  income from grant \t");
	scanf("%ld",&i.grant);
	fprintf(ptr,"%ld\n",i.grant);
			fclose(ptr);
		printf("\n\n DATA SAVED");
}

void customer()
{	ptr=fopen("income","w");
	printf("Enter the income from customer \t");
	scanf("%ld",&i.customer);
	fprintf(ptr,"%ld\n",i.customer);
			fclose(ptr);
	printf("\n\n DATA SAVED");
}

void income()
{	
	int x;
	i:
	printf("press 1 for entering donation\n");
	printf("press 2 for entering grant\n");
	printf("press 3 for entering customer\n");
	printf("press 0 to goto main menu\n");
	scanf("%d",&x);
	system("cls");
	switch(x)
	{
		case 1:
			donation();
			system("cls");
			goto i;
			break;
		case 2:
			grant();
			system("cls");
			goto i;
			break;
	    case 3:
			customer();
			system("cls");
			goto i;
			break;
		
		case 0:
			system("cls");
			break;
			
		default : 
		    printf("\n invalid option");
			system("cls");
		    goto i;
			break;
	}
	
}
void Account()
{ptr=fopen("expenses","w");
	printf("Enter the expense of accounting\t");
	scanf("%ld",&Ex.account);
	fprintf(ptr,"%ld",Ex.account); 
			fclose(ptr);
	printf("\n\n DATA SAVED");

}
void Conferences()
{
	ptr=fopen("expenses","w");
	printf("Enter the expense on Conferences\t");
	scanf("%ld",&Ex.conference);
	fprintf(ptr,"%ld",Ex.conference); 
	fclose(ptr);
	printf("\n\n DATA SAVED");
}

void Bank_charges()
{ptr=fopen("expenses","w");
	printf("Enter the expense of bank \t");
	scanf("%ld",&Ex.bank);
	fprintf(ptr,"%ld",Ex.bank); 
			fclose(ptr);
	printf("\n\n DATA SAVED");

}
void Office()
{ptr=fopen("expenses","w");
	printf("Enter the expense on offices\t");
	scanf("%ld",&Ex.office);
	fprintf(ptr,"%ld",Ex.office); 
			fclose(ptr);
	printf("\n\n DATA SAVED");
}

void Printing()
{ptr=fopen("expenses","w");
	printf("Enter the expense of printing work\t");
	scanf("%ld",&Ex.print);
	fprintf(ptr,"%ld",Ex.print); 
			fclose(ptr);
	printf("\n\n DATA SAVED");
}
void Rent()
{ptr=fopen("expenses","w");
	printf("Enter the expense of accounting\t");
	scanf("%d",&Ex.rent);
	fprintf(ptr,"%ld",Ex.rent); 
			fclose(ptr);
	printf("\n\n DATA SAVED");
}
void Travel()
{ptr=fopen("expenses","w");
	printf("Enter the expense of accounting\t");
	scanf("%d",&Ex.travel);
	fprintf(ptr,"%ld",Ex.travel); 
			fclose(ptr);
	printf("\n\n DATA SAVED");
}
void Internet()
{ptr=fopen("expenses","w");
	printf("Enter the expense of accounting\t");
	scanf("%d",&Ex.net);
	fprintf(ptr,"%ld",Ex.net); 
			fclose(ptr);
	printf("\n\n DATA SAVED");
}
void expense()
{
	int x;
	e:
	printf("press 1 for entering expense of Accounting\n");
	printf("press 2 for entering expense of Bank charges\n");
	printf("press 3 for entering expense of Coferences\n");
	printf("press 4 for entering expense of Office\n");
	printf("press 5 for entering expense of Printing\n");
	printf("press 6 for entering expense of Rent\n");
	printf("press 7 for entering expense of Travel\n");
	printf("press 8 for entering expense of Internet\n");
	printf("press 0 to goto main menu\n");
	scanf("%d",&x);
	system("cls");
	
	switch(x)
	{
		case 1:
			Account();
			system("cls");
			goto e;
			break;
		case 2:
			Bank_charges();
			system("cls");
			goto e;
			break;
	    case 3:
			Conferences();
			system("cls");
			goto e;
			break;
		case 4:
			Office();
			system("cls");
			goto e; 
			break;
		case 5:
			Printing();
			system("cls");
			goto e;
			break;
		case 6:
			Rent();
			system("cls");
			goto e;
			break;
		case 7:
			Travel();
			system("cls");
			goto e;
			break;
		case 8:
			Internet();
			system("cls");
			goto e;
			break;
		case 0:
			system("cls");
			break;
		default : 
		    printf("\n invalid option");
			system("cls");
		    goto e;
			break;
	}
}
void view()
{long sum=0,ch;
 view:
 printf("\n1.income\n2.expenses\n0.return\t"); 
  scanf("%d",&ch);

  system("cls"); 
  switch(ch)
   { 
   case 1: ptr=fopen("income","r");
   			rewind(ptr);
           fread(&i,sizeof(i),1,ptr);
   			sum=i.donation+i.grant+i.customer;
             printf("total income = %ld",sum);
             fclose(ptr);
             goto view;
      case 2:ptr=fopen("expenses","r");
  			fread(&Ex,sizeof(Ex),1,ptr);
  			sum=Ex.account+Ex.bank+Ex.conference+Ex.net+Ex.office+Ex.print+Ex.rent+Ex.travel;
             printf("total expenses = %ld",sum);
             fclose(ptr);
             goto view;
     case 0: system("cls");
     		 break;
	 default: goto view;       
   }
   system("cls");
} 
void modify_data()
{
	int x;
	m:
	printf("\n press 1 to mmodify income ");
	printf("\n press 2 to mmodify expense ");
	printf("\n press 0 to goto main menu\n");
	scanf("%d",&x);
	system("cls");
	switch(x)
	{
		case 1: modify_income();
				system("cls");
			ptr=fopen("income","w+");
			rewind(ptr);
			fwrite(&i,sizeof(i),1,ptr);
			fclose(ptr);
				goto m;
		case 2: modify_expense();
				system("cls");
				rewind(ptr);
				ptr=fopen("expense","w+");
			fwrite(&Ex,sizeof(Ex),1,ptr);
			fclose(ptr);
				goto m;
		case 0: break;
		default: printf("\n\n\n invalid option.");
				system("cls");
				goto m;
	}
}
void modify_income()
{
			    int x;
			    mi:
				printf("press 1 for modify donation  \n");
				printf("press 2 for modify grants \n");
				printf("press 3 for modify customer\n");
				printf("press 0 to goto previous menu\n");
				scanf("%d",&x);
				system("cls");
				ptr=fopen("income","w+");
				fread(&i,sizeof(i),1,ptr);
  				rewind(ptr);
				switch(x)
				{
					case 1:long m;
						fscanf(ptr,"%ld",&i.donation);
						m =modify(i.donation);
						i.donation=m;                
						fprintf(ptr,"%ld",i.donation);
						system("cls");
						goto mi;
					case 2:fscanf(ptr,"%ld",&i.grant);
						m =modify(i.grant);
						i.grant=m;
						fprintf(ptr,"%ld",i.grant);
						system("cls");
						goto mi;
					case 3:fscanf(ptr,"%ld",&i.customer);
						m =modify(i.customer);
						Ex.conference=m;
						fprintf(ptr,"%ld",i.customer);
						system("cls");
						goto mi;
					case 0: break;
					default : printf("\n invalid option ");
			    }
			    fclose(ptr);
}
void modify_expense()
{
			    int x;
			    me:
				printf("press 1 for modify Account  \n");
				printf("press 2 for modify Bank charges \n");
				printf("press 3 for modify Conferences\n");
				printf("press 4 for modify Office\n");
				printf("press 5 for modify Printing\n");
				printf("press 6 for modify Rent\n");
				printf("press 7 for modify Travel\n");
				printf("press 8 for modify Internet\n");						
				printf("press 0 to goto previous menu\n");
				scanf("%d",&x);
				system("cls");
				ptr=fopen("expense","w+");
				rewind(ptr);
  				fread(&Ex,sizeof(Ex),1,ptr);
				switch(x)
				{
					case 1: long n;
							fscanf(ptr,"%ld",&Ex.account);
							n=modify(Ex.account);
							Ex.account=n;
						fprintf(ptr,"%ld",Ex.account);
						system("cls");
						goto me;
					case 2:fscanf(ptr,"%ld",&Ex.bank);
						n =modify(Ex.bank);
						Ex.bank=n;
						fprintf(ptr,"%ld",Ex.bank);
						system("cls");
						goto me;
					case 3:fscanf(ptr,"%ld",&Ex.conference);
						n =modify(Ex.conference);
						Ex.conference=n;
						fprintf(ptr,"%ld",Ex.conference);
						system("cls");
						goto me;
					case 4:fscanf(ptr,"%ld",&Ex.office);
						n =modify(Ex.office);
						Ex.office=n;
						fprintf(ptr,"%ld",Ex.office);
						system("cls");
						goto me;
					case 5:fscanf(ptr,"%ld",&Ex.print);
						n =modify(Ex.print);
						Ex.print=n;
						fprintf(ptr,"%ld",Ex.print);
						system("cls");
						goto me;
					case 6:fscanf(ptr,"%ld",&Ex.rent);
						n =modify(Ex.rent);
						Ex.rent=n;
						fprintf(ptr,"%ld",Ex.rent);
						system("cls");
						goto me;
					case 7:fscanf(ptr,"%ld",&Ex.travel);
						n =modify(Ex.travel);
						Ex.travel=n;
						fprintf(ptr,"%ld",Ex.travel);
						system("cls");
						goto me;
					case 8:fscanf(ptr,"%ld",&Ex.net);
						n =modify(Ex.net);
						Ex.net=n;
						fprintf(ptr,"%ld",Ex.net);
						system("cls");
						goto me;
					case 0:	break;
					default : printf("\n invalid option ");
			    }
			    fclose(ptr);
}
int modify(long n)
{
	int x;
						a:				
						printf("\npress 1 to add . \npress 2 to deduct.\npress 3 to add neww data.\npress 0 to go to previous menu");
						scanf("%d",&x);
						system("cls");
						switch(x)
						{
							case 1: long a;
							
									printf("\n enter amount to add.\t");
									scanf("%ld",&a);
									n=n+a;
									return n;
									break;
							case 2:long b;
									printf("\n enter amount to deduct. \t");
									scanf("%ld",&b);
									n=n-b;
									return n;
									break;		
							case 3:long c;
									printf("\n enter data. \t");
									scanf("%ld",&c);
									n=c;
									return n;
									break;
							case 0:system("cls");  
								
								break;
							default : printf("\n\n=====invalid option=====");
									 goto a;
						}						
}
void admin()
{	int l;
	char ad[30], pass[20],uad[30],upass[20];
	strcpy(ad,"jatin");
	strcpy(pass,"jatinsu");
	z:
	printf("\n enter user ID\t");
	scanf("%s",uad);
	l = strlen(pass);
	printf("\n enter the password\t");
	for(int i=0;i<l;i++)
	{
		upass[i]=getch();
		printf("*");
	}
	
	
	if(strcmp(uad,ad)!=1&&strcmp(upass,pass)!=1)
	{
		system("cls");
		printf("\n entered password or admin ID is wrong\nplease enter the admin ID and password again.\n\n");
		goto z;
	}
	getch();
}
