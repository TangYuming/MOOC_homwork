#include<stdio.h>
char ch(char a,int n){
	int m=a-'A'+1+n;
	m%=26;
	if(m==0) m=26;
	return (m-1+'A');
}
int main(){
	int n;
	char c;
	scanf("%d %c",&n,&c);
	int i;
	for(i=0;i<n;i++){
		int j;
		int m=i;
		for(j=0;j<n-1-i;j++) printf(" ");
		for(j=0;j<=i;j++) printf("%c",ch(c,i+j));
		j--;
		for(;j>0;j--) printf("%c",ch(c,i+j-1));
		printf("\n");
	}
	return 0;
}


	
