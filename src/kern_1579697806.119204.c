#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(450, "ones");
	float **A = create_two_dim_float(180, 220, "ones");

	for (int c = 5; c < 450; c++)
	  for (int b = 5; b < 450; b++)
	    for (int a = 5; a < 450; a++)
	    {
	      
	      B[a]=B[a-3]-A[a][b];
	      
	      B[a]=0.84;
	    }

    return 0;
}