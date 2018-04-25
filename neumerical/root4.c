#include<stdio.h>
#include<math.h>
#include<stdlib.h>

double g1(double x, double y, double z ){
	return (8-2*y+2*z)/8;
}	
double g2(double x, double y, double z ){
	return (-4-x-3*z)/(-8);
}
double g3(double x, double y, double z ){
	return (12-2*x-y)/9;
}
int main(){

	double x, y, z, x0=0, y0 =0, z0 = 0;
	double eps = 1.0e-9;
	
	while(1){
		 x = g1(x0,y0,z0);
		 y = g2(x0,y0,z0);
		 z = g3(x0,y0,z0);
		 
		 if(fabs(x-x0) < eps  && fabs(y-y0) < eps  && fabs(z-z0) < eps ){
			printf("root : x:%.2lf, y:%.2lf, z:%.2lf\n", x, y, z);
			exit(1);
		}
		else{
			x0 = x;
			y0 = y;
			z0 = z;
		}
	}
	return 0;			
}	
