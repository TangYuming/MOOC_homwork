#include<stdio.h>
int num[10];
void clean(){
	int i;
	for(i=0;i<10;i++) num[i]=0;
	num[0]=1;
}
int test(int n){
	int m[3];
	int i;
	for(i=0;i<3;i++){
		m[i]=n%10;
		n/=10;
	}
	for(i=0;i<3;i++){
		if(num[m[i]]) return 1;
		num[m[i]]=1;
	}
	return 0;
}
int main(){
	clean();
	int n;
	scanf("%d",&n);
	int i;
	int num;
	int y=0;
	for(i=1;i<99;i++){
		num=100*n+i;
		if(test(num)||test(2*num)||test(3*num)){
			clean();
			continue;
		}
		else{
			printf("%d,%d,%d\n",num,2*num,3*num);
			clean();
			y=1;
		} 
	}
	if(!y)
		printf("0,0,0\n");
	return 0;
}
	
