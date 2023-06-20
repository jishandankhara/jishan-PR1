//PR1-Q3 write C program to finde the thirdangel of triangle if two other angles are given.

#include<stdio.h>
#include<conio.h>
void main(){
int a,b,c;

clrscr();
printf("frtst angel:");
scanf("%d",&a);
printf("second angel:");
scanf("%d",&b);

c = 180-(a+b);
printf("third angel:%d",c);
getch();
}
