#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(260, 260, "zeros");
	float ***C = create_three_dim_float(270, 770, 500, "zeros");
	float *B = create_one_dim_float(180, "zeros");

	for (int a = 2; a < 175; a++)
	{
	  
	    B[a]=B[a-2]-A[a][a]/0.93;
	  
	    C[a][a][a]=C[a+5][a][a]-B[a]/0.985;
	  
	    B[a]=0.564;
	}

    return 0;
}