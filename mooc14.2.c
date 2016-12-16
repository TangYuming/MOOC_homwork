#include<stdio.h>
float ave1(int n,int score[4][4]){
	int i,sum=0;
	for(i=0;i<4;i++)
		sum+=score[n][i];
	return sum/4.0;
}
float ave2(int n,int score[4][4]){
        int i,sum=0;
        for(i=0;i<4;i++)
                sum+=score[i][n];
        return sum/4.0;
}
int main(){
	char name[4][10]={"wanglei","lihong","zhangli","liuming"};
	int score[4][4]={78,90,87,92,88,91,89,78,84,76,83,75,88,90,71,83};
	int i;
	for(i=0;i<4;i++)
		printf("%s,%.2f\n",name[i],ave1(i,score));
	printf("AVERAGE:%.2f,%.2f,%.2f,%.2f\n",ave2(0,score),ave2(1,score),ave2(2,score),ave2(3,score));
	return 0;
}
