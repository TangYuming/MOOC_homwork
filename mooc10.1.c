#include<stdio.h>
int fun(int a,int b){
	if(a%b==0) return b;
	else return fun(b,a%b);
}
int main(){
	int m,n,temp;
	scanf("%d,%d",&m,&n);
	if(m<n){
		temp=m;m=n;n=temp;
	}
	printf("%d\n",fun(m,n));
	return 0;
}
