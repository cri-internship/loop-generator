#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **E = create_two_dim_float(920, 410, "ones");
	float **C = create_two_dim_float(70, 890, "ones");
	float **B = create_two_dim_float(960, 210, "ones");
	float *D = create_one_dim_float(630, "ones");
	float **A = create_two_dim_float(600, 830, "ones");

	for (int a = 0; a < 65; a++)
	{
	  
	    D[a]=D[a+4]*E[a][a]/A[a][a];
	  
	    A[a][a]=C[a][a]/D[a]+B[a][a];
	    E[a][a]=C[a+5][a+4]+B[a][a];
	}

    return 0;
}