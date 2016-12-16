#include<stdio.h>
int main(){
	int a[3][4];
	int i,j;
	for(i=0;i<3;i++)
		for(j=0;j<4;j++)
			scanf("%d",a[i]+j);
	int num;
	scanf("%d",&num);
	int sum=0;
	for(j=0;j<4;j++){
		if(j<3) printf("%d ",a[num-1][j]);
		else printf("%d\n",a[num-1][j]);
		sum+=a[num-1][j];
	}
	printf("%g\n",sum/4.0);
	return 0;
}
