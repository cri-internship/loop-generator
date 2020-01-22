#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(430, "zeros");
	float ***E = create_three_dim_float(610, 1000, 760, "zeros");
	float ***C = create_three_dim_float(120, 280, 840, "zeros");
	float **D = create_two_dim_float(480, 990, "zeros");
	float ***A = create_three_dim_float(420, 540, 110, "zeros");

	for (int a = 5; a < 120; a++)
	{
	  
	    D[a][a]=0.463;
	    D[a-3][a-5]=0.146;
	  
	    C[a][a][a]=0.266;
	    C[a-2][a][a]=0.677;
	  
	    E[a][a][a]=D[a][a]/E[a][a][a]-B[a]+C[a][a][a];
	    D[a][a]=D[a][a-3]*A[a][a][a]/C[a][a][a]+B[a];
	}

    return 0;
}