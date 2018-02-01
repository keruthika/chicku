#include<stdio.h>
void main()
{
char a[10];
int i,count=0;
printf("enter a string");
scanf("%d",&a);
for(i=0;a[i]!=0;i++)
{
if(a[i]=='/n')
count++;
}
printf(" no of character is %d",count);
}
