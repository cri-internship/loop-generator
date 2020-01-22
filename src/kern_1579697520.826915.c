#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(250, "ones");
	float *B = create_one_dim_float(490, "ones");
	float *A = create_one_dim_float(280, "ones");

	for (int b = 4; b < 280; b++)
	  for (int a = 4; a < 280; a++)
	  {
	    
	     B[a]=0.469;
	     B[a-4]=0.01;
	    
	     C[a]=A[a]/C[a]+B[a];
	     A[a]=A[a-2]*0.047;
	  }

    return 0;
}