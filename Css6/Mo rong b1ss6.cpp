#include<stdio.h>
int main(){
	int n,i;
	for(n=1;n<=9;n++){
		for(i=1;i<=10;i++){
			printf("%c %d * %2d = %2d",179,i,n,n*i);
		}
		printf("%c \n",179);
	}
	return 0;
}
