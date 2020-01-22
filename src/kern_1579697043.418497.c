#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(800, 690, 700, "ones");
	float *D = create_one_dim_float(810, "ones");
	float **E = create_two_dim_float(220, 420, "ones");
	float ***A = create_three_dim_float(620, 380, 110, "ones");
	float **C = create_two_dim_float(120, 800, "ones");

	for (int a = 4; a < 115; a++)
	{
	  
	    C[a][a]=D[a]+E[a][a]-B[a][a][a];
	    C[a-4][a-4]=A[a][a][a]+D[a]/E[a][a];
	  
	    float var_a=C[a][a]-0.728;
	    float var_b=C[a+5][a+5]-0.396;
	}

    return 0;
}