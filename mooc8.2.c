#include<stdio.h>
int main(){
	int m,n;
	scanf("%d%d",&m,&n);
	int i,j,k;
	int a[100][100];
	for (i=0; i<m; i++)
		for (j=0; j<n; j++)
			scanf("%d",&a[i][j]);
	int max=0,posy,jud,has=0;
	for (i=0; i<m; i++){
		jud=1;max=0;
		for(j=0; j<n; j++)
			if(a[i][j]>max){
				posy=j;
				max=a[i][j];
				}
		//printf("%d,%d\n",max,posy);
		for(k=0;k<m;k++)
			if(max > a[k][posy]) jud=0;
		if(jud){
			printf("Point:a[%d][%d]==%d\n",i,posy,a[i][posy]);
			has=1;
			}
		}
	if(!has) printf("No Point\n");
	return 0;
}
	
		
