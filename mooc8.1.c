#include<string.h>
#include<stdio.h>
int main(){
	char a[5][20];
	int i;
	for(i=0;i<5;i++)
		scanf("%s",a[i]);
	int j;
	char temp[20];
	for (i=0; i<4; i++)
		for (j=i; j<5; j++)
			if(strcmp(a[i],a[j])<0){
				strcpy(temp,a[i]);
				strcpy(a[i],a[j]);
				strcpy(a[j],temp);
			}
	for(i=0;i<5;i++)
		printf("%s\n",a[i]);
	return 0;
}
