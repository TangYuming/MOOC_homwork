#include<stdio.h>
int fun(int a,int n){
	if(n>=1){
		fun((a+1)*2,n-1);
		printf("sell=%d,",a+2);
	}
	else{
		printf("sum=%d\n",a);
	}
}
int main(){
	int a,b;
	//scanf("%d%d",&a,&b);
	fun(2,7);
	printf("\n");
	return 0;
}
	
