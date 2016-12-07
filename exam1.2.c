#include<stdio.h>
#include<string.h>
int main(){
	char a[100],b[100],c;
	gets(a);
	gets(b);
	scanf("%c",&c);
	int lena=strlen(a);
	char temp[100];
	int i;
	for(i=0;;i++)
		if(a[i]==c) break;
	int n=++i;
	for(;i<lena;i++)
		temp[i-n]=a[i];
	a[n]='\0';
	strcat(a,b);
	strcat(a,temp);
	printf("%s\n",a);
	return 0;
}
