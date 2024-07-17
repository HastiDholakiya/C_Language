#include<stdio.h>
#include<conio.h>

main()
{
   float principal;
   float rate;
   float time;
   float simple_interest;

   clrscr();

       printf("Enter the principal amount: ");
       scanf("%f", &principal);
       printf("Enter the rate of interest: ");
       scanf("%f", &rate);
       printf("Enter the time period in months: ");
       scanf("%f", &time);

       simple_interest = (principal * rate * time) / 100;

       printf("The simple interest is: %f", simple_interest);

   getch();

}