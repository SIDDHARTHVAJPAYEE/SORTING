#include<stdio.h>
int main()
{
int x[10],y,m,e,f,g;
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
m=e;
f=e+1;
while(f<=9)
{
if(x[f]<x[m])
{
m=f;
}
f++;
}
g=x[e];
x[e]=x[m];
x[m]=g;
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