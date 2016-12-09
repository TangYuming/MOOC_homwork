#include<stdio.h>
int fun(int a,int sum){
	if(a>0) return fun(a/10,sum+a%10);
	else return sum;
}
int main(){
	int n;
	scanf("%d",&n);
	printf("%d\n",fun(n,0));
	return 0;
}
	
