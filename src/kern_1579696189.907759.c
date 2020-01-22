#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(540, 810, 450, "zeros");
	float *D = create_one_dim_float(640, "zeros");
	float *A = create_one_dim_float(270, "zeros");
	float **C = create_two_dim_float(450, 860, "zeros");

	for (int a = 4; a < 640; a++)
	{
	  
	    D[a]=B[a][a][a]/0.19;
	    D[a-4]=A[a]*B[a][a][a];
	  
	    C[a][a]=D[a]+A[a]-B[a][a][a];
	    B[a][a][a]=D[a-2]*A[a]/0.454;
	}

    return 0;
}