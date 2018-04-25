#include<stdio.h>
#include<math.h>
#include<stdlib.h>

double g( double x ){
	return (1-x*x - x);
}

double gp( double x ){
	return (-2*x - 1 );
}

double h( double x ){
	return (1-x*x);
}
int main(){
	double a = 0.5, x0, eps = 1.0e-7;
	int i=0;
AGAIN:
	x0 = a - g(a)/gp(a);
	i++;
	//x0 = h(a);
	if( fabs(g(x0)) < eps ){
	  printf ("ROOT = %14.8lf   %d\n", x0, i );
	  exit(0);
	}

	a = x0;
	

	goto AGAIN;
	return 0;
}
