#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(860, "ones");
	double *C = create_one_dim_double(60, "ones");
	double *B = create_one_dim_double(560, "ones");

	for (int b = 5; b < 56; b++)
	  for (int a = 5; a < 56; a++)
	  {
	    
	     B[a]=B[a-5]/0.02;
	    
	     C[a]=C[a-5]+0.491;
	    
	     C[a]=0.593;
	    
	     A[a]=0.035;
	     A[a]=0.996;
	    
	     double var_a=C[a]*0.916;
	     double var_b=C[a+4]*0.517;
	  }

    return 0;
}