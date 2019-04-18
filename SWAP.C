#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
printf("/nEnter two numbers",a,b);
scanf("%d%d/n",&a,&b);
printf("Before swappig a=%d  b=%d",a,b);
c=a;
a=b;
b=c;
printf("After swapping a=%d  b=%d",a,b);
getch();
}
