#include<stdio.h>
#include<math.h>
int main(){
    float  a,b,c,x1,x2,delta;
	printf("Nhap ba so a,b,c: ");
	scanf("%f %f %f",&a,&b,&c);
    if(a==0 && b==0 && c==0){
    	printf("Phuong trinh vo so nghiem");
    } else {
    	delta = b*b-4*a*c;
    	if(delta>0){
    		x1 = (-b + sqrt(delta))/(2*a);
    		x2 = (-b - sqrt(delta))/(2*a);
    		printf("phuong trinh  co 2 nghiem la: x1= %.2f va x2= %.2f",x1,x2);
    	} else if(delta==0){
    		x1=x2=-b/(2*a);
    		printf("Phuong trinh co nghiem kep la: x1=x2= %.2f",x1);
    	} else
    		printf("Phuong trinh vo nghiem");
		}
}

    	
		
	
