#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(300, "random");
	float *B = create_one_dim_float(190, "random");

	for (int c = 0; c < 187; c++)
	  for (int b = 0; b < 187; b++)
	    for (int a = 0; a < 187; a++)
	    {
	      
	      A[a]=A[a+1]+B[a];
	      
	      B[a]=B[a+3]-A[a];
	      
	      A[a]=A[a+3]+B[a];
	      
	      B[a]=A[a]-B[a];
	    }

    return 0;
}