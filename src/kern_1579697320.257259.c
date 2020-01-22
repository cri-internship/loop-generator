#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(940, "ones");
	double *B = create_one_dim_double(640, "ones");

	for (int c = 4; c < 640; c++)
	  for (int b = 4; b < 640; b++)
	    for (int a = 4; a < 640; a++)
	    {
	      
	      A[a]=A[a-4]*B[a];
	      
	      B[a]=B[a-4]-0.871;
	      
	      A[a]=A[a-1]*0.081;
	      
	      B[a]=0.426;
	      
	      double var_a=A[a]/0.25;
	      double var_b=A[a+3]/0.231;
	      
	      double var_c=A[a]-0.822;
	    }

    return 0;
}