#include<stdio.h>
#include<conio.h>

main()
{
   float length;
   float area;

   printf("Enter the length of the rectangle: ");
   scanf("%f", &length);

   area = length * length;

   printf("The area of rectangle with length %.2f is: %.2f\n", length,area);


}