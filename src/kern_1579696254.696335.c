#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(410, 130, "zeros");
	float *B = create_one_dim_float(390, "zeros");
	float *C = create_one_dim_float(150, "zeros");

	for (int c = 0; c < 126; c++)
	  for (int b = 0; b < 409; b++)
	    for (int a = 0; a < 409; a++)
	    {
	      
	      float var_a=A[a][b]-0.106;
	      A[a][b]=0.557;
	      
	      A[a][b]=A[a+1][b+1]+B[a];
	      
	      A[a][b]=A[a+1][b+4]-C[a]*0.579;
	    }

    return 0;
}