#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(480, "random");
	float **A = create_two_dim_float(640, 560, "random");
	float **E = create_two_dim_float(890, 560, "random");
	float *D = create_one_dim_float(490, "random");
	float **B = create_two_dim_float(420, 860, "random");

	for (int d = 2; d < 560; d++)
	  for (int c = 3; c < 415; c++)
	    for (int b = 3; b < 415; b++)
	      for (int a = 3; a < 415; a++)
	      {
	        
	       B[a][b]=B[a+5][b+1]-0.478;
	        
	       D[a]=C[a];
	       D[a-3]=A[a][b]/E[a][b]-0.676*E[a][b];
	        
	       A[a][b]=D[a]/E[a][b];
	       A[a-3][b]=C[a]-E[a][b];
	        
	       C[a]=0.237;
	       C[a+5]=0.441;
	        
	       float var_a=B[a][b]+0.388;
	       float var_b=B[a][b-2]-0.516;
	        
	       float var_c=B[a][b]-0.966;
	       float var_d=B[a+2][b+1]/0.211;
	      }

    return 0;
}