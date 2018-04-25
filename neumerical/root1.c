#include<stdio.h>
#include<math.h>
#include<stdlib.h>

double f( double x ){
	return (x*x -1);
}
int main(){
	double a = 0.25, b = 1.5, x0, eps = 1.0e-7;
	
	if (f(a)*f(b) >= 0){
	  printf ("Err.. in Domain\n");

	  exit(0);
	}
AGAIN:
	x0 = (a+b)/2.0;

	if( fabs(f(x0)) < eps ){
	  printf ("ROOT = %14.8lf\n", x0 );
	  exit(0);
	}

	if(f(a)*f(x0) > 0)
	  a = x0;
	else
	  b = x0;

	goto AGAIN;
	return 0;
}
