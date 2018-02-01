# include<stdio.h>
void main()
{
char a[100];
int i,count=0;
printf("enter a paragraph");
scanf("%d",&a);
for(i=0;a[i]!=0;i++)
{
if(a[i]=='/n')
{
count++;
}
}
printf("no of lines is %d",count);
}
