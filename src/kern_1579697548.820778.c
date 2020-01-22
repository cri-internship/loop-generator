#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(700, 600, "random");
	float *A = create_one_dim_float(150, "random");

	for (int c = 3; c < 600; c++)
	  for (int b = 3; b < 145; b++)
	    for (int a = 3; a < 145; a++)
	    {
	      
	      A[a]=A[a-2]+0.108;
	      
	      B[a][b]=B[a-3][b-3]-0.154;
	      
	      B[a][b]=B[a-3][b]*0.537;
	      
	      A[a]=A[a+5]+0.149;
	    }

    return 0;
}