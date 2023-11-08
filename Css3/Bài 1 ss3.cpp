#include<stdio.h>
int main(){
	int r;
	printf("Nhap gia tri ban kinh");
	scanf("%d", &r);
	const float pi = 3.14;
	float cv = 2*pi*r;
	float dt = pi*r*r;
	printf ("Chu vi la %.2f\n",cv);
	printf ("Dien tich la %.2f\n",dt);
	return 0;
}
