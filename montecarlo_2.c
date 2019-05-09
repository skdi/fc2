#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
float f(float x) //definir funcion//
{
	return exp(x*x);
}
//definicion de conteo variado //
float alea_re(float ran1)
{
	float b;
	b=(float)(1.0*ran1*rand()/(RAND_MAX+1.0));
	return b;
}

int main()
{
	int m,i,p;
	float n,ds,k,pr,A,sumA,sumAA,pr2,num,r,x,y;
	float xa=0;float xb=1;float ya=0;float yb=2.71;
	printf("cantidad de puntos que desea arrogar:m=");
	scanf("%i",&m);
	printf("interancciones que desea tener:p=");
	scanf("%i",&p);
	sumA=0;sumAA=0;pr2=0;
	for (k=1;k<=p;k+=1)
	{
		xa=0;
		xb=1;
		ya=0;
		yb=2.71;
		for(i=1;i<=m;i+=1)
		{
			r=alea_re(1.0);
			x=xa+r*(xb-xa);
			r=alea_re(1.0);
			y=ya+r*(yb-ya);
			if(y<=f(x))	// se pone la funcion de la curva //
			{
				n=n+1;	
			}	
		}

		A=n*(xb-xa)*(yb-ya)/m;
	}
	sumA=sumA+A;sumAA=sumAA+pow(A,2);
	pr=sumA/p;
	pr2=pr2+pow(pr,2);
	ds=sqrt((p*pr2-pow(pr,2)))/p;
	printf("la muestra promedio de area es: %f \n",pr);
	printf("la desviacion estandar es: %f\n",ds);
	return 0;
}

