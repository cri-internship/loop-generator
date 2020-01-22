#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(860, "ones");
	double *A = create_one_dim_double(990, "ones");

	for (int c = 0; c < 858; c++)
	  for (int b = 0; b < 858; b++)
	    for (int a = 0; a < 858; a++)
	    {
	      
	      B[a]=0.365;
	      B[a+2]=0.094;
	      
	      B[a]=B[a]-A[a];
	      A[a]=B[a]+A[a];
	    }

    return 0;
}