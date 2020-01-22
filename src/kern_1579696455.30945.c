#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(690, "ones");
	float *B = create_one_dim_float(980, "ones");

	for (int b = 3; b < 686; b++)
	  for (int a = 3; a < 686; a++)
	  {
	    
	     B[a]=B[a-1]*A[a];
	    
	     B[a]=B[a+2]-A[a];
	    
	     A[a]=B[a];
	     A[a+4]=B[a];
	    
	     B[a]=B[a]*A[a];
	     A[a]=B[a+1]-0.593;
	  }

    return 0;
}