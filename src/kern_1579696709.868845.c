#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(750, "ones");
	float *C = create_one_dim_float(380, "ones");
	float **A = create_two_dim_float(340, 530, "ones");
	float **E = create_two_dim_float(260, 320, "ones");
	float **D = create_two_dim_float(80, 200, "ones");

	for (int c = 0; c < 380; c++)
	  for (int b = 0; b < 380; b++)
	    for (int a = 0; a < 380; a++)
	    {
	      
	      C[a]=B[a]-E[a][b];
	      A[a][b]=C[a]*0.2;
	    }

    return 0;
}