#include<stdio.h>
#include<string.h>
int main(){
	char a[1000],b[10];
	gets(a);
	gets(b);
	int ans=0;
	int lena=strlen(a),lenb=strlen(b);
	int i=0,j=0;
	while(i<lena){
		if(a[i]!=b[j]){
			i++;
			j=0;
		}
		else{
			i++;
			j++;
		}
		if(j==lenb){
			ans++;
			j=0;
		}
	}
	if(ans)
		printf("%d\n",ans);
	else
		printf("No\n");
	return 0;
}
