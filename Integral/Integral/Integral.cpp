#include<stdio.h>
int main() {
	float Integral(float,float);
	float(*p)(float, float);
	float a, b, c;
	p = Integral;
	printf("��������Ϊ:f(x)=x^2+2x+1");
	printf("\n����������a=");
	scanf_s("%f",&a);
	printf("\n����������b=");
	scanf_s("%f",&b);
	c = (*p)(a,b);
	printf("���Ϊ:%5.2f",c);
	return 0;
}
float Integral(float x,float y) {
	float z;
	z = (x * x * x / 3 + x * x + x) - (y*y*y/3+y*y+y);
	return(z);
}