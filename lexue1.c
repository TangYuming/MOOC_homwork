#include <stdio.h>  
#include <stdlib.h>  
void reverse( );  
int main( )  
{   char str[100];  
    int start, end;  
    gets(str);  
    scanf("%d%d", &start, &end);  
    reverse( str, start, end );  
    printf("%s\n", str);  
    return 0;  
} 
#include<string.h>
void reverse(char* a,int start,int end){
	int len;
	len=strlen(a);
	if(end>=len) end=len-1;
	if(start>=len) return;
	if(start>=end) return;
	char temp;
	temp=a[start];
	a[start]=a[end];
	a[end]=temp;
	reverse(a,start+1,end-1);
}
