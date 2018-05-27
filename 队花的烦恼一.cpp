#include <stdio.h>
int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		int a[1000],i = 0;
		if(n ==0||n == 1){ 
		a[i] = n;
		printf("%d\n",a[0]);} 
		else{
		while(n!=0){
			a[i++] = n%2;
			n = n/2;
		}
		int m,t,j;
		m = i;
		for(i = 0,j = m-1;i < m/2;i++,j--){
			t = a[i];
			a[i] = a[j];
			a[j] = t;
		}
		for(i = 0;i < m ;i++)
		if(a[i] != 0)
		break;
		for(j = i;j < m;j++)
		printf("%d",a[j]);
		printf("\n");
		}
	}
}
