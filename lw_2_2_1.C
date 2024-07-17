#include<stdio.h>
#include<conio.h>
#define pi 3.14

main()
{
  float radius, area;

  clrscr();

	   printf("Enter the value of radius : ");
	   scanf("%f", &radius);

	   area = pi*radius*radius;
	   printf("The area of the circle is : %.2f\n ",area);

  getch();

}