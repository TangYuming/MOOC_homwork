#include<stdio.h>
int fun1(int a,int b){
	int temp;
	if(b>a) {
		temp=a;
		a=b;
		b=temp;
	}
	int c;
	while(1){
		c=a%b;
		if(c==0) break;
		a=b;
		b=c;
	}
	return b;
}
int fun2(int a,int b,int c){
	return a*b/c;
}
int main(){
	int a,b;
	scanf("%d,%d",&a,&b);
	int c=fun1(a,b);
	printf("%d",c);
	printf("最大公约数：%d\n最小公倍数：%d\n",c,fun2(a,b,c));
	return 0;
}
