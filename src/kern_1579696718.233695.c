#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(350, "zeros");
	double *A = create_one_dim_double(700, "zeros");

	for (int b = 5; b < 345; b++)
	  for (int a = 5; a < 345; a++)
	  {
	    
	     A[a]=A[a-1]+0.716;
	    
	     B[a]=B[a]-A[a];
	     B[a]=0.304;
	    
	     B[a]=B[a+2]/A[a];
	    
	     A[a]=B[a]+A[a];
	     A[a]=B[a+5]+A[a];
	    
	     double var_a=B[a]/0.988;
	     double var_b=B[a-2]+0.291;
	  }

    return 0;
}