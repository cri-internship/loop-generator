#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **D = create_two_dim_float(630, 270, "random");
	float ***B = create_three_dim_float(570, 720, 940, "random");
	float ***A = create_three_dim_float(450, 800, 560, "random");
	float **E = create_two_dim_float(110, 710, "random");
	float *C = create_one_dim_float(270, "random");

	for (int a = 5; a < 110; a++)
	{
	  
	    E[a][a]=E[a][a-2]-D[a][a]/B[a][a][a]+C[a]*A[a][a][a];
	  
	    D[a][a]=D[a][a-1]*E[a][a]/B[a][a][a];
	  
	    E[a][a]=E[a-1][a-3]*0.609;
	  
	    B[a][a][a]=0.167;
	    B[a-2][a-5][a-4]=0.826;
	}

    return 0;
}