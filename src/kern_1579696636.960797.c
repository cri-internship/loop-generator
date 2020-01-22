#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(500, "ones");
	double *B = create_one_dim_double(610, "ones");
	double *C = create_one_dim_double(560, "ones");

	for (int c = 3; c < 557; c++)
	  for (int b = 3; b < 557; b++)
	    for (int a = 3; a < 557; a++)
	    {
	      
	      C[a]=C[a-3]-0.316;
	      
	      C[a]=C[a+3]+0.232;
	    }

    return 0;
}