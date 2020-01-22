#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(450, "ones");
	float *A = create_one_dim_float(550, "ones");
	float *B = create_one_dim_float(250, "ones");

	for (int b = 2; b < 446; b++)
	  for (int a = 2; a < 446; a++)
	  {
	    
	     C[a]=0.125;
	     C[a-2]=0.787;
	    
	     C[a]=B[a]+A[a];
	  }

    return 0;
}