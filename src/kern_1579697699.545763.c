#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(390, "zeros");
	float ***B = create_three_dim_float(570, 680, 840, "zeros");

	for (int a = 2; a < 387; a++)
	{
	  
	    A[a]=A[a+3]*B[a][a][a];
	  
	    B[a][a][a]=A[a];
	    B[a+5][a+2][a+3]=0.005;
	  
	    B[a][a][a]=B[a][a][a]/A[a];
	    A[a]=B[a-1][a-2][a-1]/0.833;
	}

    return 0;
}