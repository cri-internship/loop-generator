#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(930, 20, 630, "ones");
	float *E = create_one_dim_float(850, "ones");
	float **A = create_two_dim_float(650, 310, "ones");
	float *C = create_one_dim_float(910, "ones");
	float ***D = create_three_dim_float(160, 890, 110, "ones");

	for (int a = 4; a < 157; a++)
	{
	  
	    D[a][a][a]=D[a+3][a+1][a+1]*0.093;
	  
	    D[a][a][a]=E[a]+A[a][a]/B[a][a][a]*C[a];
	  
	    D[a][a][a]=E[a]/D[a][a][a]*D[a][a][a]-B[a][a][a];
	    E[a]=E[a-4]+C[a];
	}

    return 0;
}