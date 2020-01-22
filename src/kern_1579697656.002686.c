#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *E = create_one_dim_float(350, "zeros");
	float ***C = create_three_dim_float(380, 220, 340, "zeros");
	float ***D = create_three_dim_float(380, 70, 190, "zeros");
	float ***A = create_three_dim_float(860, 510, 250, "zeros");
	float ***B = create_three_dim_float(930, 70, 950, "zeros");

	for (int a = 4; a < 349; a++)
	{
	  
	    D[a][a][a]=D[a][a+4][a+4]+A[a][a][a];
	  
	    B[a][a][a]=E[a]*D[a][a][a]/B[a][a][a]-C[a][a][a]+C[a][a][a];
	    E[a]=B[a][a][a]/D[a][a][a];
	  
	    E[a]=D[a][a][a]*A[a][a][a]-C[a][a][a];
	  
	    D[a][a][a]=0.16;
	}

    return 0;
}