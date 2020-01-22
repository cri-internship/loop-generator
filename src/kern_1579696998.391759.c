#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(760, "zeros");
	float *A = create_one_dim_float(100, "zeros");

	for (int c = 3; c < 98; c++)
	  for (int b = 3; b < 98; b++)
	    for (int a = 3; a < 98; a++)
	    {
	      
	      A[a]=A[a-3]-B[a];
	      
	      B[a]=B[a-3]*A[a];
	      
	      B[a]=B[a+3]*0.309;
	      
	      A[a]=0.352;
	    }

    return 0;
}