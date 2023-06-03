#include<stdio.h>
#include<conio.h>

void main (){
int a,b;

clrscr();
printf("Enter the value of a ");
scanf("%d",&a);
do{
a=a/10;
b++;
}while(a!=0);
printf("%d",b);



getch();
}