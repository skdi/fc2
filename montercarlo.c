#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>


float alea_re (float ran1) /* Genera Num. Aleatorios fraccionarios */
{
	return (float)(1.0*ran1*rand()/(RAND_MAX+1.0));
}
float fun1 (float x) /* Funcion */
{
	return pow(2.71828,-1*pow(x,2));
}
int main()
{
	int n,N;
	float k,M=500;
	float x,y,r,xa=0.0,xb=1.0,ya=0.0,yb=1.0,area;
	srand(time(NULL));
	for(N=500;N<10000;N+=500)
	{
		for(k=0,n=0;k<N;k++)
		{
			r=alea_re(1.0);
			x=xa+r*(xb-xa);
			r=alea_re(1.0);
			y=ya+r*(yb-ya);

			if(y<fun1(x)) n++;
		}
	//area=((float)n/N)*(xb-xa)*(yb-ya); 
	 area=((float)n/N)*(xb-xa)*(yb-ya);
	 printf("area %f\t puntos dentro=%d\t Total de puntos=%.d\n",area,n,N);
	}
}
