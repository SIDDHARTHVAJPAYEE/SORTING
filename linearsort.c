#include<stdio.h>
int main()
{
int x[10],g,y,e,f;
y=0;
while(y<=9)
{
printf("Enter a number:");
scanf("%d",&x[y]);
y++;
}
e=0;
while(e<=8)
{
f=e+1;
while(f<=9)
{
if(x[f]<x[e])
{
g=x[e];
x[e]=x[f];
x[f]=g;
}
f++;
}
e++;
}
y=0;
while(y<=9)
{
printf("%d\n",x[y]);
y++;
}
return 0;
}