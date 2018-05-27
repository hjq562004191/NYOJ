#include <stdio.h>
#include <string.h>
int main(){
	int n;
	scanf("%d",&n);
	while(n--){
		char a[100][100],t[100];
		int i,j,m;
		scanf("%d",&m);
		for(i = 0;i < m;i++)
			scanf("%s",a[i]);
			strcpy(t,a[0]);
		for(i = 1;i < m;i++)
		if(strcmp(t,a[i])>0){
			strcpy(t,a[i]);
		}
		printf("%s\n",t);
	}
}
