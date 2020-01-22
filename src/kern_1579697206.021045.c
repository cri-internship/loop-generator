#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *D = create_one_dim_double(320, "ones");
	double *C = create_one_dim_double(360, "ones");
	double *A = create_one_dim_double(970, "ones");
	double **B = create_two_dim_double(980, 950, "ones");
	double **E = create_two_dim_double(410, 650, "ones");

	for (int d = 0; d < 646; d++)
	  for (int c = 0; c < 318; c++)
	    for (int b = 0; b < 318; b++)
	      for (int a = 0; a < 318; a++)
	      {
	        
	       D[a]=E[a][b]*C[a];
	       C[a]=D[a]-A[a]*B[a][b]+A[a]/C[a];
	        
	       C[a]=0.267;
	       float  var_a=C[a]/0.803;
	        
	       E[a][b]=E[a+5][b+4]-0.881;
	        
	       E[a][b]=D[a];
	        
	       double var_b=D[a]/0.255;
	       double var_c=D[a+2]-0.754;
	        
	       A[a]=C[a]/A[a]+0.186-D[a];
	       B[a][b]=C[a+3]+A[a]*D[a]/E[a][b]-B[a][b];
	      }

    return 0;
}