#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(770, "zeros");
	double *B = create_one_dim_double(500, "zeros");
	double **A = create_two_dim_double(940, 820, "zeros");

	for (int d = 5; d < 820; d++)
	  for (int c = 5; c < 496; c++)
	    for (int b = 5; b < 496; b++)
	      for (int a = 5; a < 496; a++)
	      {
	        
	       B[a]=B[a+4]/A[a][b];
	        
	       B[a]=B[a+2]+C[a]/A[a][b];
	        
	       A[a][b]=0.23;
	       A[a-5][b]=0.136;
	        
	       double var_a=A[a][b]+0.46;
	       double var_b=A[a][b-5]-0.438;
	        
	       double var_c=B[a]+0.149;
	       double var_d=B[a-1]+0.888;
	      }

    return 0;
}