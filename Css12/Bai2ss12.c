#include<stdio.h>
int divid(int a, int b){
	if(a%b==0 && a>b){
		return a/b;
	} 
}
int divid1(int b, int c){
	if(b%c==0 && b>c){
		return b/c;
	} 
}
int divid2(int a, int c){
	if(a%c==0){
		return a/c;
	} 
}
int multi(int a,int b){
	return a*b;
}
int multi1(int b,int c){
	return b*c;
}
int multi2(int a,int c){
	return a*c;
}
int main(){
	int a,b,c;
	printf("Nhap a,b,c: ");
	scanf("%d %d %d",&a,&b,&c);
	printf("Cap so thu 1 la:\n");
	printf("%d * %d = %d\n",a,b,multi(a,b));
	if(a%b==0){
	    printf("%d / %d = %d\n",a,b,divid(a,b));
	} else if(a>b){
		printf("%d khong chia het cho %d\n",a,b);
	} else{
		printf("%d khong chia het cho %d\n",b,a);
	}
	printf("Cap so thu 2 la:\n");
	printf("%d * %d = %d\n",b,c,multi1(b,c));
	if(b%c==0){
	    printf("%d / %d = %d\n",b,c,divid1(b,c));
	} else if(b>c){
		printf("%d khong chia het cho %d\n",b,c);
	} else{
		printf("%d khong chia het cho %d\n",c,b);
	}
	printf("Cap so thu 3 la:\n");
	printf("%d * %d = %d\n",a,c,multi2(a,c));
	if(a%c==0){
	    printf("%d / %d = %d\n",a,c,divid2(a,c));
	} else if(a>c){
		printf("%d khong chia het cho %d\n",a,c);
	} else{
		printf("%d khong chia het cho %d\n",c,a);
	}
}

