#include<stdio.h>
#include<string.h>
int jud(char *a,int len){
	int i;
	for(i=0;i<len/2;i++){
		if(a[i]!=a[len-i-1]) return 1;
	}
	return 0;
}
int main(){
	char a[100];
	scanf("%s",a);
	printf("%s",jud(a,strlen(a))?"NO\n":"YES\n");
	return 0;
}
