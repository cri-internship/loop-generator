#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(860, 900, 100, "ones");
	float *A = create_one_dim_float(890, "ones");
	float **D = create_two_dim_float(610, 110, "ones");
	float *B = create_one_dim_float(750, "ones");

	for (int a = 0; a < 855; a++)
	{
	  
	    C[a][a][a]=C[a+4][a+5][a+3]*A[a]+D[a][a]-B[a];
	}

    return 0;
}