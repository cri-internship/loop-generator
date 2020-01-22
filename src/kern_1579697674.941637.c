#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(560, "random");
	double *B = create_one_dim_double(140, "random");

	for (int c = 4; c < 135; c++)
	  for (int b = 4; b < 135; b++)
	    for (int a = 4; a < 135; a++)
	    {
	      
	      A[a]=A[a-1]/B[a];
	      
	      B[a]=B[a-4]-0.281;
	      
	      B[a]=A[a];
	      
	      A[a]=A[a+1]*0.175;
	      
	      B[a]=B[a]*0.359;
	      B[a]=B[a+5]-A[a];
	      
	      double var_a=B[a]/0.098;
	      double var_b=B[a+2]+0.852;
	    }

    return 0;
}