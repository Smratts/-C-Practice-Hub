#include<stdio.h>
#include<conio.h>
 void main()
 {
    int a=10;
    //clrscr();
   // printf("enter valuefor a  ")
  //  scanf("%d\n", &a);   // Use %d to read an int
    printf(" %d\n",++a);
    printf(" %d\n",a++);
    printf(" %d\n",--a);
    printf(" %d\n",a--);
    a+=10;
    printf("%d\n",a);
    getch();
 }