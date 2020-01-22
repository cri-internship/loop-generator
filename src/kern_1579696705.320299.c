#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(600, "ones");
	double *A = create_one_dim_double(780, "ones");

	for (int b = 4; b < 595; b++)
	  for (int a = 4; a < 595; a++)
	  {
	    
	     B[a]=A[a];
	     A[a]=B[a]/A[a];
	    
	     A[a]=A[a-4]/0.59;
	    
	     A[a]=A[a-1]/0.04;
	    
	     B[a]=0.498;
	  }

    return 0;
}