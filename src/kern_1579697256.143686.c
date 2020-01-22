#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(400, 370, 590, "zeros");
	float *A = create_one_dim_float(800, "zeros");

	for (int a = 5; a < 395; a++)
	{
	  
	    B[a][a][a]=B[a-1][a-5][a-2]/0.877;
	  
	    float var_a=A[a]+0.606;
	    A[a]=0.816;
	  
	    B[a][a][a]=B[a+5][a+2][a+5]/0.278;
	  
	    B[a][a][a]=B[a+5][a][a+5]+A[a];
	  
	    B[a][a][a]=B[a][a][a]+A[a];
	    A[a]=B[a-4][a-4][a-4]-A[a];
	  
	    A[a]=B[a][a][a]-A[a];
	    B[a][a][a]=B[a-4][a][a-2]/A[a];
	}

    return 0;
}