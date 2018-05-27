#include<stdio.h>
#include<string.h>
int main() {
int t;
scanf("%d", &t);
while(t--) {
getchar();
char a, b;
scanf("%c %c", &a, &b);
if(a > b) {
printf("%c<%c\n", a, b);
}
if(a < b) {
printf("%c>%c\n", a, b);
}
if(a == b) {
printf("%c=%c\n", a, b);
}
}
}
