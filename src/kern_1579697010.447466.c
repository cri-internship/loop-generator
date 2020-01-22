#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(560, 190, 490, "zeros");
	float *A = create_one_dim_float(710, "zeros");
	float ***C = create_three_dim_float(600, 840, 270, "zeros");

	for (int a = 3; a < 560; a++)
	{
	  
	    A[a]=A[a+3]-C[a][a][a];
	  
	    A[a]=0.653;
	  
	    B[a][a][a]=0.578;
	    B[a-3][a-2][a-2]=0.336;
	}

    return 0;
}