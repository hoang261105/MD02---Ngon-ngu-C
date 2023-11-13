#include<stdio.h>
int main(){
	int n;
	do{
	    printf("Nhap n: ");
	    scanf("%d",&n);
	    if(n<0){
	   	    printf("Nhap sai, nhap lai: \n");
	   	}
	} while(!(n>0 && n<=9));
	printf("\Bang cuu chuong %d\n",n);
	for(int i=1;i<=10;i++){
	printf("\t%d * %d = %d\n",n,i,n*i);
	}
	return 0;	
}

	
