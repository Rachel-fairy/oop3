#include<stdio.h>
int main() {
	float Integral(int,int);
	float(*p)(int,int);
	int a, b;
	float c;
	p = Integral;
	printf("��������Ϊ:f(x)=x^2+2x+1");
	printf("\n����������a=");
	scanf_s("%d",&a);
	printf("\n����������b=");
	scanf_s("%d",&b);
	c = (*p)(a,b);
	printf("���Ϊ:%5.2f",c);
	return 0;
}
float Integral(int x,int y) {
	float z;
	z = (x * x * x / 3 + x * x + x) - (y*y*y/3+y*y+y);
	return(z);
}