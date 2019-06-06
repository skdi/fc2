#include <stdio.h> 
#include <stdlib.h> 
#include <math.h> 
#include <complex.h>
int main() 
{	
	FILE*Arch;	
	Arch=fopen("datos2","wt+");
	float r;	
	int N=50;	
	double x[N];	
	r=2; 	
	x[0]=0.3;	
	fprintf(Arch,"x , r\n");
	for (r=2;r<4;r=r+0.001){		
		for (int i=0;i<=N;i++){			
			x[i+1]=r*x[i]*(1-x[i]);	
			if(i>0.9*N){				
				fprintf(Arch,"%f , %f\n",x[i],r);	
			}
		}	
	}
	fclose(Arch);
}
