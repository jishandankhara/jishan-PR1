//PR1_Q2 write C program to finde gross salart by adding % of HRA, DA, and TA of user choice.
#include<stdio.h>
#include<conio.h>
void main(){
int HRA,DA,TA,a,b; // (a=gross salary and b=base salary
clrscr();
printf("base salary:");
scanf("%d",&b);

printf("HRA=");
scanf("%d",&HRA);
HRA = (b*HRA)/100;
printf("DA=");
scanf("%d",&DA);
DA = (b*DA)/100;
printf("TA=");
scanf("%d",&TA);
TA = (b*TA)/100;
a = b+HRA+DA+TA;
printf("Rs.%d",a);
getch();
}