#include<stdio.h>
#include<conio.h>
#define PI 3.14

main()
{
   float radius;
   float perimeter;

   clrscr();

	printf("Enter the radius of the circle: ");
	scanf("%f", &radius);

	perimeter = 2 * PI * radius;

	printf("The perimeter of circle is: %f", perimeter);

	getch();


}