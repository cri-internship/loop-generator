#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(820, "zeros");
	float **B = create_two_dim_float(670, 930, "zeros");
	float *D = create_one_dim_float(600, "zeros");
	float ***E = create_three_dim_float(80, 120, 160, "zeros");
	float *C = create_one_dim_float(480, "zeros");

	for (int c = 4; c < 820; c++)
	  for (int b = 4; b < 820; b++)
	    for (int a = 4; a < 820; a++)
	    {
	      
	      A[a]=0.739;
	      A[a-4]=0.73;
	    }

    return 0;
}