#include<stdio.h>
#include<conio.h>

main()
{
    float x,y;
    float total;

    clrscr();
	    printf("Enter the value of x: ");
	    scanf("%f",&x);

	    printf("Enter the value of y: ");
	    scanf("%f",&y);

	    total = (x+y) * (x+y);

	    printf("Result of (x+y)2 is %.2f",total);



    getch();

}