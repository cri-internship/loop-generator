#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **D = create_two_dim_float(140, 460, "random");
	float ***A = create_three_dim_float(890, 370, 670, "random");
	float *C = create_one_dim_float(640, "random");
	float ***B = create_three_dim_float(470, 460, 340, "random");

	for (int a = 5; a < 140; a++)
	{
	  
	    D[a][a]=D[a-3][a-2]*C[a]-A[a][a][a];
	  
	    B[a][a][a]=B[a-4][a-5][a-1]/D[a][a]-0.004*A[a][a][a];
	  
	    A[a][a][a]=B[a][a][a]-B[a][a][a]/D[a][a];
	    A[a-4][a-4][a]=B[a][a][a];
	  
	    float var_a=A[a][a][a]+0.413;
	    float var_b=A[a-2][a-1][a-3]*0.193;
	}

    return 0;
}