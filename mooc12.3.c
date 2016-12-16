#include<stdio.h>
int jud(int *a,int num){
	int i;
	for(i=0;i<10;i++){
		if(a[i]==num) return 1;
	}
	return 0;
}
int main(){
	int a[10];
	int i,num;
	for(i=0;i<10;i++)
		scanf("%d",a+i);
	scanf("%d",&num);
	if(jud(a,num))
		printf("%d\n",num);
	else 
		printf("No\n");
	return 0;
}
