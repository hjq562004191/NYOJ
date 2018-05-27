#include<stdio.h>
int main(){
	int n;
	while(1){
	scanf("%d",&n);
	int a,b,c,t=0;
	for(int i=0;i<n;i++){ 
	scanf("%d %d",&a,&b);
	c=a+b;
	if(c>t) 
	t=c;
	} 
	if(n == 0)
	break;
	else
	printf("%d\n",t);
	} 
}
