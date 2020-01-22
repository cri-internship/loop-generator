#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(910, "ones");
	float *A = create_one_dim_float(850, "ones");

	for (int c = 5; c < 850; c++)
	  for (int b = 5; b < 850; b++)
	    for (int a = 5; a < 850; a++)
	    {
	      
	      B[a]=A[a]*B[a];
	      A[a]=0.685;
	      
	      B[a]=0.525;
	      
	      A[a]=A[a]*B[a];
	      A[a]=A[a-2]+B[a];
	      
	      B[a]=A[a]*B[a];
	      A[a]=A[a-1]*B[a];
	    }

    return 0;
}