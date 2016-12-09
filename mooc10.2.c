#include<stdio.h>
int fun(int n){
	if(n==1) return 1;
	else return n+fun(n-2);
}
int main(){
	int n;
	scanf("%d",&n);
	printf("%d\n",fun(2*n-1));
	return 0;
}
