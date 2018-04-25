#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define pi 3.141598
double rad = pi/180.0;

double f(double x){
	//x = x*rad;
	return sin(x);
}	
int main(){
	double x, a, b, h, df;
	int i;
	printf("\"x\",\"sin(x)\",\"sin\'(x)\"\n");
	
	
	a = 0, b=2*pi;
	
	h = (b-a)/200;
	
	df = (f(a+h)-f(a))/h;
	printf("%lf,%lf,%lf\n", a, f(a), df);
	
	for(i=1; i<200; i++ ){
		x = a + i*h;
		df = (f(x+h)-f(x-h))/(2*h);
		printf("%lf,%lf,%lf\n", x, f(x), df);
	}
	
	df = (f(b)-f(b-h))/h;
	printf("%lf,%lf,%lf\n", b, f(b), df);
	
	return 0;
}	
	
	
		
	
