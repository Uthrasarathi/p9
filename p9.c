#include<stdio.h>
#include<conio.h>
void main()
{
int n1,n2,c,i,j;
clrscr();
printf("Enter the 2 number range\n");
scanf("%d%d",&n1,&n2);
for(i=n1+1;i<n2;i++)
{
c=0;
for(j=2;j<=i/2;++j)
{
if(i%j==0)
{
c=1;
break;
}
}
if(c==0)
printf("%d",i);
}
getch();
}
