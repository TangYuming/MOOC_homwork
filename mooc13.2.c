#include<stdio.h>
typedef struct{
int score;
int n;
}student;
int main(){
	int a[3][4];
	int i,j;
	for(i=0;i<3;i++)
		for(j=0;j<4;j++)
			scanf("%d",a[i]+j);
	student s[3],temp;
	for(i=0;i<3;i++){
		s[i].n=i;
		int sum=0;
		for(j=0;j<4;j++) sum+=a[i][j];
		s[i].score=sum;
	}
	for(i=0;i<2;i++)
		for(j=i;j<3;j++)
			if(s[j].score>s[i].score){
				temp=s[j];s[j]=s[i];s[i]=temp;
			}
	for(i=0;i<3;i++){
		printf("%d,%d,%d,%d\n",a[s[i].n][0],a[s[i].n][1],a[s[i].n][2],a[s[i].n][3]);}
	return 0;
}
