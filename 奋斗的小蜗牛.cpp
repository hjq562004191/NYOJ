#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	while(n--){
		long h;
		long day = 0;
		scanf("%ld",&h);
		while(1){
			if(h>10){ 
			h-=5;
			day++;
			} 
			if(h<=10){
			day++;
			break;
		}
	
		}
			printf("%ld\n",day); 
	}
}
