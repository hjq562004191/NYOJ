#include <stdio.h>
#include <string.h>
int subString(char *a,char *b){
	int i,j,f,m,n,count = 0;
	m = strlen(a);
	n = strlen(b);
	for(i = 0;i < m;i++)
	{
		f = 1;
		if(a[i] == b[0] && f){
			for(j = 0;j < n;j++){
				if(a[i+j] != b[j])
				f = 0;	
			}
			if(f == 1)
			count++;
		}
	}
	return count;
}
int main(){
	char s1[100];
	char s2[100];
	gets(s1);
	gets(s2);
	int s;
	s = subString(s1,s2);
	printf("%d",s);
}
