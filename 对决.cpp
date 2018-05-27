#include <stdio.h>
int main(){
	int n,k;
	while(scanf("%d%d",&n,&k),n!=0&&k!=0){
		int i,j,f = 0;
		for(i = 1;i < n;i++)
		{
			j = n-i;
			if(i*j == k){
				f = 1;
				break;
			}
		}
		if(f == 1)
		printf("YES\n");
		else
		printf("NO\n");	
	}
}
