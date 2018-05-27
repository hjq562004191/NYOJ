#include <stdio.h>
#include <string.h>
int main(){
	int n,m;
	scanf("%d",&n);
	while(n--){
		char s[1000];
		char t;
		int i,j;
		scanf("%s",s);
		m = strlen(s);
		for(j = 0,i = 0;i < m;i++){
			if(s[i] == 'R'){
				t = s[i];
				s[i] = s[j];
				s[j] = t;
				j++;
			}
		}
		for(i = 0;i < m;i++){
			if(s[i] == 'W'){
				t = s[i];
				s[i] = s[j];
				s[j] = t;
				j++;
			}
		}
		for(i = 0;i < m;i++){
			if(s[i] == 'B'){
				t = s[i];
				s[i] = s[j];
				s[j] = t;
				j++;
			}
		}
		puts(s);
	}
} 
