#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	while(n--){
		long long m,count = 0;
		long long i;
		scanf("%lld",&m);
		for(i = 471;;i++){ 
		if(i*i*i%1000 == 111)
		count++;
		if(count == m)
		break;
		}
		printf("%lld\n",i); 
	}
}
