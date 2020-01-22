#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(460, "random");
	double *B = create_one_dim_double(340, "random");

	for (int b = 3; b < 340; b++)
	  for (int a = 3; a < 340; a++)
	  {
	    
	     B[a]=B[a-1]/0.692;
	    
	     A[a]=A[a-3]/B[a];
	    
	     B[a]=B[a]/A[a];
	    
	     B[a]=A[a]+B[a];
	     A[a]=A[a-2]/B[a];
	    
	     double var_a=A[a]/0.892;
	     double var_b=A[a+3]*0.144;
	  }

    return 0;
}