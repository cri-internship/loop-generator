#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **E = create_two_dim_float(950, 30, "zeros");
	float ***C = create_three_dim_float(580, 60, 150, "zeros");
	float **A = create_two_dim_float(330, 810, "zeros");
	float **D = create_two_dim_float(270, 260, "zeros");
	float ***B = create_three_dim_float(260, 140, 70, "zeros");

	for (int a = 2; a < 270; a++)
	{
	  
	    D[a][a]=D[a-2][a-2]*0.06;
	  
	    C[a][a][a]=E[a][a]-A[a][a]/D[a][a]+B[a][a][a];
	    B[a][a][a]=E[a+2][a+1]*C[a][a][a];
	}

    return 0;
}