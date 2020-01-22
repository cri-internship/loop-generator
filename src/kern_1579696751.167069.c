#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(680, "ones");
	double *E = create_one_dim_double(370, "ones");
	double *D = create_one_dim_double(150, "ones");
	double *A = create_one_dim_double(760, "ones");
	double *B = create_one_dim_double(580, "ones");

	for (int d = 4; d < 580; d++)
	  for (int c = 4; c < 580; c++)
	    for (int b = 4; b < 580; b++)
	      for (int a = 4; a < 580; a++)
	      {
	        
	       B[a]=B[a-4]+0.186;
	        
	       A[a]=C[a]+0.713/E[a]-B[a];
	       A[a]=A[a]/B[a]+E[a];
	        
	       double var_a=C[a]+0.782;
	       double var_b=C[a+1]*0.015;
	      }

    return 0;
}