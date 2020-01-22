#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(480, "zeros");
	float ***D = create_three_dim_float(540, 700, 540, "zeros");
	float **A = create_two_dim_float(300, 420, "zeros");
	float **C = create_two_dim_float(430, 870, "zeros");

	for (int a = 0; a < 425; a++)
	{
	  
	    C[a][a]=C[a][a]*D[a][a][a]/A[a][a];
	    A[a][a]=C[a+5][a+4]+B[a]*0.662;
	}

    return 0;
}