#include<stdio.h>
#include<string.h>
int w[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
char y[11]={'1','0','X','9','8','7','6','5','4','3','2'};
char ans[100][19];
char last(char *a){
	int i,s=0;
	for(i=0;i<17;i++)
		s+=(a[i]-'0')*w[i];
	s=s%11;
	return y[s];
}
int shiba(char *a){
	if(a[17]==last(a)) return 1;
	else return 0;
}
void shiwu(char *a){
	int i,c;
	char an[19];
	for(i=0;i<6;i++)
		an[i]=a[i];
	c=(a[12]-'0')*100+(a[13]-'0')*10+a[14]-'0';
	if(c>=996&&c<=999){
		an[6]='1';
		an[7]='8';
	}
	else{
		an[6]='1';
		an[7]='9';
	}
	for(;i<15;i++)
		an[i+2]=a[i];
	an[17]=last(an);
	an[18]='\0';
	strcpy(a,an);
	return;
}
int main(){
	int n;
	scanf("%d",&n);
	int i,l;
	char temp[19];
	for(i=0;i<n;i++){
		scanf("%s",temp);
		l=strlen(temp);
		if(l==18)
			strcpy(ans[i],(shiba(temp)?"Valid":"Invalid"));
		else if(l==15){
			shiwu(temp);
			strcpy(ans[i],temp);
		}
		else strcpy(ans[i],"Invalid");
	}
	for(i=0;i<n;i++){
		printf("%s",ans[i]);
		printf("\n");
	}
	return 0;
}
