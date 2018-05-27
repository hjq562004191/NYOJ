#include <stdio.h>
int main(){
	int m,n,k = 0;
	int a[10000] = {0},b[10000];
	while(scanf("%d%d",&m,&n),m!=0&&n!=0){
		b[k++] = m;
		a[m] += n;
		int i;
		for(i=0;i<k-1;i++)
		if(b[i] == m)
		k--;
	}
	int i;
	for(i = 0;i < k;i++){
		printf("%d %d\n",b[i],a[b[i]]);
	}
}
