#include<stdio.h>
#include<conio.h>

void main()
{
	int a, b, sum;
	//int b;
	clrscr();

	//format specifier: %d, %c, %u, %i, %f, %s
	printf("Enter value for a:");
	scanf("%d", &a); //&--> address of operator
	printf("\nEnter value for b:");
	scanf("%d", &b);

	//calculation
	sum = a+b;

	printf("\nSum is: %d", sum);

	getch();
}