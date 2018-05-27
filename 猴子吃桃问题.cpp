#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	while(n--){
		int day,sum = 2;
		int i;
		scanf("%d",&day);
		for(i = 0;i < day;i++)
		sum = sum*2+1;
		printf("%d\n",sum-1);
	}
} 
