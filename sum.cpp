#include<stdio.h>
void sum(int *,int *); ///defination
int main()
{ int a,b,c;
scanf("%d%d",&a,&b);
sum(&a,&b);  ///calling
printf("\n%d %d",a,b);
}
void sum(int *a,int *b)
{int temp;
temp=*a;
*a=*b;
*b=temp;
printf("%d %d",*a,*b); 
}
