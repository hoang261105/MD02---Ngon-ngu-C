#include<stdio.h>
#include<stdlib.h>
int main(){
	int a,b,c,sum,ava,max,min;
	printf("Nhap vao 3 so: ");
	scanf("%d %d %d",&a,&b,&c);
	do{
		printf("******************CALCULATOR***************\n");
	    printf("1. Tong 3 so nguyen\n");
	    printf("2. Trung binh cong cua 3 so nguyen\n");
	    printf("3. So lon nhat, so nho nhat trong 3 so\n");
	    printf("4. Thoat\n");
	    printf("Lua chon cua ban: ");
	    int choice;
	    scanf("%d",&choice);
	    switch(choice){
	    	case 1:
	    		sum=a+b+c;
	    		printf("Tong cua ba so nguyen la: %d\n",sum);
	    		break;
	    	case 2:
	    		ava=(a+b+c)/3;
	    		printf("Trung binh cong cua ba so nguyen la: %d\n",ava);
	    		break;
	    	case 3:
	    		min=a;
	    		max=a;
	    		if(min>b){
	    			min=b;
	    		} 
				if(min>c){
	    			min=c;
	    		} 
				if(max<b){
					max=b;
				} 
				if(max<c){
					max=c;
				} 
				printf("So lon nhat la: %d va so nho nhat la: %d\n",max,min);
				break;
		    case 4:
		    	exit(choice);
		    default:
		    	printf("Vui long nhap tu 1 den 4: \n");
		}
	} while("Vui long nhap tu 1 den 4: \n");
}
	    
			
	
