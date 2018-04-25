#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double f ( double x ) {
   return (x*x - 1);
}

double g ( double x){
	return x;
}

double h( double x ){
	return (g(x) - f(x));
}	

int main() {
   double a=0.0, b=2.0, x0, eps=1.0e-6;
   int i=0;


   if (h(a)*h(b) >= 0) {
     printf ("Err.. in domain\n");
     exit(0);
   } 


AGAIN:
//   x0 = (a+b)/2.0;
   x0 = (b*h(a) - a*h(b))/(h(a) - h(b));
   i++;

   if (fabs(h(x0)) < eps ) {
     printf ("Root = %14.9g' Iter= %d\n", x0, i);
     exit(0);
   } 


   if (h(a)*h(x0) > 0) 
     a = x0;
   else
     b = x0;
  

   goto AGAIN; 
}
