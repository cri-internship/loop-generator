#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(740, 850, "zeros");
	float ***C = create_three_dim_float(370, 440, 170, "zeros");
	float *E = create_one_dim_float(560, "zeros");
	float **D = create_two_dim_float(300, 380, "zeros");
	float ***B = create_three_dim_float(740, 520, 110, "zeros");

	for (int a = 4; a < 365; a++)
	{
	  
	    C[a][a][a]=C[a][a][a-4]/E[a]-D[a][a]+B[a][a][a];
	  
	    C[a][a][a]=C[a+5][a+3][a+2]+A[a][a];
	  
	    A[a][a]=A[a][a+2]+0.554/B[a][a][a];
	  
	    E[a]=C[a][a][a];
	    E[a-3]=C[a][a][a]*A[a][a]-D[a][a];
	}

    return 0;
}