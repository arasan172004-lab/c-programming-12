#include<stdio.h>
#include<conio.h>
void main()
{
char a;
clrscr();
printf("enter the character:");
scanf("%c",&a);
if(a=='a'|| a=='e'|| a=='i'|| a=='o'|| a=='u')
{
printf("vowels");
}
else
{
printf("Normal");
}
getch();
}