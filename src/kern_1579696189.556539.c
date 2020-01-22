#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(570, 350, "ones");
	float *B = create_one_dim_float(490, "ones");
	float ***C = create_three_dim_float(420, 40, 640, "ones");
	float **D = create_two_dim_float(470, 550, "ones");

	for (int a = 4; a < 420; a++)
	{
	  
	    C[a][a][a]=C[a][a-3][a]/0.547;
	  
	    C[a][a][a]=B[a]+A[a][a];
	    A[a][a]=B[a-1]*D[a][a]+C[a][a][a];
	  
	    D[a][a]=C[a][a][a]+B[a]*B[a]/D[a][a];
	    B[a]=C[a][a-4][a-4]+0.214/A[a][a];
	}

    return 0;
}