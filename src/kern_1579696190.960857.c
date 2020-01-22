#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(940, 140, 520, "zeros");
	float *B = create_one_dim_float(610, "zeros");

	for (int a = 4; a < 608; a++)
	{
	  
	    A[a][a][a]=A[a-4][a-2][a-2]/B[a];
	  
	    B[a]=0.631;
	    B[a-2]=0.892;
	  
	    B[a]=0.465;
	  
	    A[a][a][a]=0.653;
	  
	    float var_a=B[a]*0.504;
	    float var_b=B[a]+0.947;
	  
	    B[a]=A[a][a][a]-0.368;
	    A[a][a][a]=A[a-4][a-3][a-4]+B[a];
	}

    return 0;
}