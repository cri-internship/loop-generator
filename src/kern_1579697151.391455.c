#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(700, "ones");
	double *A = create_one_dim_double(110, "ones");

	for (int b = 0; b < 105; b++)
	  for (int a = 0; a < 105; a++)
	  {
	    
	     A[a]=A[a+5]+0.096;
	    
	     double var_a=A[a]-0.639;
	     double var_b=A[a+4]*0.923;
	    
	     double var_c=B[a]*0.075;
	     double var_d=B[a+2]*0.991;
	  }

    return 0;
}