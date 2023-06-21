#include<stdio.h>
#include<conio.h>
main()
{
	const float pi=3.14;
	float circle,B,p, a,b,l,d,r,square,rec,L,tri,pri,prn,n;
	clrscr();
	printf("enter your r for area of circle");
	scanf("%f",&r);
	circle=pi*r*r;
	printf("your area of circle is=%.2f",circle);
	printf("\nenter your a for area of square");
	scanf("%f",&a);
	square= a*a;
	printf("area of square is=%.1f",square);
	printf("\nenter l of rectangle=");
	scanf("%f",&l);
	printf("enter b of rectangle");
	scanf("%f",&b);
	rec=l*b;
	printf("area of rectangle is%.2f",rec);
	printf("\nenter value of L for triangle");
	scanf("%f",&L);
	printf("\nenter B for triangle");
	scanf("%f",&B);
	tri=L*B/2;
	printf("area of triangle is=%.2f",tri);
	printf("\nenter your r for perimeter");
	scanf("%f",&r);
	pri=pi*r*r;
	printf("perimeter of circle is=%.2f",pri);
	printf("\nenter your time period as =");
	scanf("%f",&p);
	printf("\nenter your rate of intrest as r");
	scanf("%f",&r);
	printf("\nenter your n of intrest");
	scanf("%f",&n);

	prn=p*r*n;
	printf("your simple intrest is=%.2f",prn);


	getch();


}












