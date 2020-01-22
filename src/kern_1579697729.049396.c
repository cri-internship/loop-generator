#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **D = create_two_dim_float(950, 980, "zeros");
	float *A = create_one_dim_float(520, "zeros");
	float ***E = create_three_dim_float(860, 540, 550, "zeros");
	float *B = create_one_dim_float(590, "zeros");
	float *C = create_one_dim_float(380, "zeros");

	for (int c = 1; c < 380; c++)
	  for (int b = 1; b < 380; b++)
	    for (int a = 1; a < 380; a++)
	    {
	      
	      C[a]=C[a-1]+0.03*B[a];
	    }

    return 0;
}