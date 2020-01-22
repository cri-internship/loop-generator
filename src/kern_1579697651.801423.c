#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(720, 770, "random");
	float ***D = create_three_dim_float(140, 940, 580, "random");
	float ***A = create_three_dim_float(730, 950, 410, "random");
	float **C = create_two_dim_float(710, 580, "random");

	for (int a = 3; a < 720; a++)
	{
	  
	    B[a][a]=B[a-1][a-3]/0.257;
	  
	    B[a][a]=A[a][a][a]/C[a][a]*D[a][a][a]-B[a][a];
	    C[a][a]=A[a+5][a+3][a+2]*0.056-D[a][a][a];
	}

    return 0;
}