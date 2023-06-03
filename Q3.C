#include<stdio.h>
#include<conio.h>

void main (){
int a,b,c,sum;

clrscr();
printf("Enter the value of a ");
scanf("%d",&a);
a=b;
while(a>=10){
a=a/10;
}
b=c%10;
sum =a+b;
printf("the sum is %d",sum);

getch();
}