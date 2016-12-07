#include<stdio.h>
#include<string.h>
int main(){
	int n;
	scanf("%d",&n);
	int i,j;
	int ans[100];
	char s[21];
	int l;
	int a,b,c,d;
	for(i=0;i<n;i++){
		gets(s);
		l=strlen(s);
		a=0;b=0;c=0;d=0;
		for(j=0;j<l;j++){
			if(s[j]>='A'&&s[j]<='Z') a=1;
			else if(s[j]>='a'&&s[j]<='z') b=1;
			else if(s[j]>='0'&&s[j]<='9') c=1;
			else d=1;
		}
		ans[i]=a+b+c+d;
		if(l<6) ans[i]=1;
	}
	for(i=0;i<n;i++)
		switch(ans[i]){
			case 0:printf("Not Safe\n");break;
			case 1:printf("Not Safe\n");break;
			case 2:printf("Medium Safe\n");break;
			default:printf("Safe\n");break;
		}
	return 0;
	}		
