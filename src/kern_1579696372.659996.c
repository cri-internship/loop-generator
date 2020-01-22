#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(700, 770, 60, "zeros");
	float *A = create_one_dim_float(420, "zeros");
	float *B = create_one_dim_float(640, "zeros");

	for (int a = 0; a < 415; a++)
	{
	  
	    A[a]=B[a];
	    A[a+5]=C[a][a][a];
	}

    return 0;
}