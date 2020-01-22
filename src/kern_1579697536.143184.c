#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(550, 730, "ones");
	double **B = create_two_dim_double(990, 750, "ones");
	double *C = create_one_dim_double(370, "ones");

	for (int c = 5; c < 745; c++)
	  for (int b = 3; b < 366; b++)
	    for (int a = 3; a < 366; a++)
	    {
	      
	      B[a][b]=B[a][b-5]+0.171;
	      
	      C[a]=C[a-3]*0.125;
	      
	      C[a]=C[a+2]/0.807;
	      
	      B[a][b]=A[a][b];
	      
	      double var_a=C[a]-0.251;
	      double var_b=C[a+4]+0.164;
	    }

    return 0;
}