#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	while(n--){
	int m;
	scanf("%d",&m); 
	int i,j;
	for(i = 1;i <= m;i++){ 
		for(j = i;j <= 9;j++)
		printf("%d*%d=%d ",i,j,i*j);
		printf("\n");
		} 
		} 
}
