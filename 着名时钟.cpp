#include<stdio.h>
#include<string.h>
int main()
{
char a[20][1000]={"0","I","II","III","IV","V","VI","VII","VIII","IX","X","XI","XII"},b[100];
int t=0,i;
while(scanf("%s",&b)!=EOF)
{
t++;
for(i=0;i<13;i++) 
if(strcmp(a[i],b)==0)
{
printf("Case %d: %d\n",t,i);
break;
}
}
return 0;
}
