#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(430, "random");
	float **D = create_two_dim_float(430, 480, "random");
	float ***C = create_three_dim_float(330, 870, 800, "random");
	float **A = create_two_dim_float(450, 460, "random");

	for (int a = 5; a < 330; a++)
	{
	  
	    C[a][a][a]=A[a][a]+B[a]*D[a][a];
	    C[a-4][a-2][a-3]=D[a][a]-A[a][a]*B[a];
	  
	    C[a][a][a]=0.113;
	  
	    A[a][a]=B[a]-C[a][a][a]/A[a][a]*C[a][a][a];
	    B[a]=B[a-5]/D[a][a];
	  
	    D[a][a]=D[a][a]*0.73-C[a][a][a];
	    C[a][a][a]=D[a-5][a-2]*B[a]/A[a][a];
	}

    return 0;
}