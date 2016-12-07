#include<stdio.h>
int main(){
	int a[10];
	int i;
	int insert;
	for(i=0;i<9;i++)
		scanf("%d,",&a[i]);
	int k;
	scanf("%d",&insert);
	int temp;
	for(i=0;i<8;i++)
		for(k=i;k<9;k++)
			if(a[i]>a[k]){
				temp=a[i];a[i]=a[k];a[k]=temp;
			}
	for(i=0;i<9;i++)
		if(insert<=a[i]) break;
	for(k=8;k>=i;k--)
		a[k+1]=a[k];
	a[i]=insert;
	for(i=0;i<10;i++)
		printf((i<9)?"%d,":"%d\n",a[i]);
	return 0;
}
