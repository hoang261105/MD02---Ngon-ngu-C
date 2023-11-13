#include<stdio.h>
int main(){
	int num;
	printf("Nhap vao cac so nguyen n: ");
	do {
		scanf("%d",num);
		if (num==0){
		break;
	}
	    if (num%3!=0){
	    continue;
	}
	printf("So nguyen %d chia het cho 3\n",num);
	} while(1==1);
}
