#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c,d,e,E;
	clrscr();
	printf("enter your value of A");
	scanf("%d",&a);
	printf("enter value of B ");
	scanf("%i",&b);
	c=a;
	a=b;
	b=c;
	printf("your swap value of a is=%d\n",a);
	printf("your swap value of b is=%i",b);
	printf("\nenter your value of D=");
	scanf("%d",&d);
	printf("enter your value of E is=");
	scanf("%d",&e);
	d=d+e;
	e=d-e;
	d=d-e;

	printf("your swap value of d is %i",d);
	printf("\nyour swap value of e is %i",e);
	getch();
}