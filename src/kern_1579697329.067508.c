#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(750, "zeros");
	double *A = create_one_dim_double(870, "zeros");

	for (int c = 2; c < 747; c++)
	  for (int b = 2; b < 747; b++)
	    for (int a = 2; a < 747; a++)
	    {
	      
	      A[a]=A[a-1]/0.933;
	      
	      B[a]=B[a+3]/0.346;
	      
	      A[a]=B[a];
	      
	      B[a]=B[a]*A[a];
	      A[a]=B[a-1]*A[a];
	      
	      double var_a=B[a]/0.926;
	      double var_b=B[a-2]/0.36;
	    }

    return 0;
}