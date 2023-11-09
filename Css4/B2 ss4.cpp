#include<stdio.h>
int main(){
	int a,b,c;
	printf("Nhap ba canh cua tam giac: ");
	scanf("%d %d %d",&a,&b,&c);
	if(a+c>b && a+b>c && c+b>a){
		if (a==b && a==c){
	        printf("Tao thanh tam giac deu"); 
	    }else if(a==b||a==c||b==c){
	    if(a*a==b*b+c*c||b*b==a*a+c*c||c*c==a*a+b*b){
		    printf("Tao thanh tam giac vuong can");
	    }else{
	  	    printf("Tao thanh tam giac can");
	  	}
	  	} else if(a*a==b*b+c*c||b*b==a*a+c*c||c*c==a*a+b*b){
	  		printf("Tao thanh tam giac vuong");
	  	}
	    else{
	  		printf("Tam giac thuong");
		} 
		}
		else{
			printf("Khong la tam giac");
		}
}
	
		
    
		

