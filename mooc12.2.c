#include<stdio.h>
int main(){
	int a[10];
	int i;
	for(i=0;i<10;i++)
		scanf("%d",a+i);
	int j,temp;
	for(i=0;i<9;i++)
		for(j=i;j<10;j++)
			if(a[j]<a[i]){
				temp=a[j];a[j]=a[i];a[i]=temp;
			}
	for(i=0;i<9;i++)
		printf("%d,",a[i]);
	printf("%d\n",a[9]);
	return 0;
}
