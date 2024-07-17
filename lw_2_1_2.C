#include<stdio.h>
#include<conio.h>

main()
{
  int number = 5;
  int square = number * number;

  clrscr();

  printf("- - - - - - - - -\n");
  printf("|               |\n");
  printf("|  %d x %d = %d   |\n",number,number,square);
  printf("|               |\n");
  printf("- - - - - - - - -\n");

  getch();

}