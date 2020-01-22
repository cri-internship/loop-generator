#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(650, "random");
	float ***B = create_three_dim_float(940, 430, 350, "random");

	for (int a = 3; a < 647; a++)
	{
	  
	    B[a][a][a]=B[a-3][a-2][a-2]-0.677;
	  
	    float var_a=A[a]/0.323;
	    A[a]=0.063;
	  
	    A[a]=B[a][a][a];
	  
	    A[a]=B[a][a][a]/A[a];
	    B[a][a][a]=B[a+5][a+2][a+5]-A[a];
	}

    return 0;
}