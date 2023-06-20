//pr-1-Q1 write a program to convert temperature from celsicus to fahrenheit.use formula for C to F is: F=(C*9/5)+32

#include<stdio.h>
#include<conio.h>
void main(){
float C,F;

clrscr();
printf("the temperature in celcius:");
scanf("%f",&C);
F = (C*9/5)+32;
printf("the temperature in fahrenhite: %.1f",F);
getch();
}
