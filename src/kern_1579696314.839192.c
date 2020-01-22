#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(190, "random");
	float *B = create_one_dim_float(990, "random");

	for (int b = 4; b < 187; b++)
	  for (int a = 4; a < 187; a++)
	  {
	    
	     A[a]=A[a-4]-B[a];
	    
	     B[a]=B[a-1]+A[a];
	    
	     A[a]=0.33;
	    
	     B[a]=0.635;
	  }

    return 0;
}