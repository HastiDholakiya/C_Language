#include<stdio.h>
#include<conio.h>

main()
{
   float base;
   float height;
   float area;

   clrscr();

     printf("Enter the base of triangle: ");
     scanf("%f", &base);
     printf("Enter the height of triangle: ");
     scanf("%f", &height);

     area = 0.5 * base * height;

     printf("The area of the triangle is: %f", area);


   getch();
}