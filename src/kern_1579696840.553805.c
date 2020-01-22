#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(700, "zeros");
	float *A = create_one_dim_float(200, "zeros");

	for (int c = 2; c < 200; c++)
	  for (int b = 2; b < 200; b++)
	    for (int a = 2; a < 200; a++)
	    {
	      
	      A[a]=A[a-2]+0.463;
	      
	      B[a]=B[a+4]*0.074;
	      
	      B[a]=0.383;
	      
	      A[a]=A[a]+B[a];
	      B[a]=A[a]-B[a];
	    }

    return 0;
}