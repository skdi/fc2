#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	//FILE*Arch;
	//Arch=fopen("datos1","wt+");
	float r;int N=50;double x[N];
	//Valor de R
	r = 1+sqrt(8);
	//Valor inicial
	x[0] = 0.3;
	//fprintf(Arch,"x , i");
	printf("x , i");
	for (int i=0; i <= N; i++){
		x[i+1] = r*x[i]*(1-x[i]);
		//fprintf(Arch,"%f , %d\n",x[i],i);
		printf("%f , %d\n",x[i],i);
	}
	//fclose(Arch);
	return 0;
}
