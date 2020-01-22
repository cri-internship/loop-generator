#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **D = create_two_dim_float(740, 790, "random");
	float *E = create_one_dim_float(740, "random");
	float *B = create_one_dim_float(300, "random");
	float *A = create_one_dim_float(890, "random");
	float **C = create_two_dim_float(670, 400, "random");

	for (int d = 0; d < 787; d++)
	  for (int c = 2; c < 295; c++)
	    for (int b = 2; b < 295; b++)
	      for (int a = 2; a < 295; a++)
	      {
	        
	       D[a][b]=D[a+1][b+3]*0.479;
	        
	       E[a]=E[a+1]-0.075;
	        
	       D[a][b]=A[a]+E[a]*0.601;
	        
	       B[a]=0.064;
	       B[a-2]=0.747;
	        
	       B[a]=D[a][b]+0.454;
	       D[a][b]=D[a+4][b+1]/B[a]*C[a][b];
	        
	       float var_a=B[a]-0.216;
	       float var_b=B[a+5]*0.858;
	        
	       C[a][b]=A[a]*D[a][b]/E[a]+0.646;
	       A[a]=A[a+1]*C[a][b]-B[a];
	      }

    return 0;
}