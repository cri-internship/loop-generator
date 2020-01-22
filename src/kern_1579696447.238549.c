#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(110, "random");
	float *A = create_one_dim_float(930, "random");

	for (int b = 4; b < 110; b++)
	  for (int a = 4; a < 110; a++)
	  {
	    
	     A[a]=A[a-4]+B[a];
	    
	     A[a]=A[a-1]*0.198;
	    
	     A[a]=A[a+5]+0.608;
	    
	     B[a]=0.178;
	     B[a-4]=0.779;
	    
	     A[a]=A[a]*B[a];
	     B[a]=A[a]/0.598;
	  }

    return 0;
}