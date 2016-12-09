#include<stdio.h>
int step=0;
int fun(int a){
	printf((a==1)?"%d\n":"%d,",a);
	step++;
	if(a==1) return 0;
	if(a%2) return fun(3*a+1);
	else return fun(a/2);
}
int main(){
	int n;
	scanf("%d",&n);
	fun(n);
	printf("step=%d\n",step);
	return 0;
}
