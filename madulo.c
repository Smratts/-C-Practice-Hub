#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
 {
int madulo, number1,number2;
//clrscr();
printf ("enter number1 and number2 :"  );
scanf("%i %i \n",&number1 , &number2);
madulo = number1 % number2;
printf("madulo : %i\n", madulo );
getch();
 } 