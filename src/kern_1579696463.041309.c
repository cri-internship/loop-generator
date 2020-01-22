#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(750, 450, 560, "ones");
	float **B = create_two_dim_float(80, 580, "ones");
	float **E = create_two_dim_float(930, 550, "ones");
	float *D = create_one_dim_float(70, "ones");
	float *A = create_one_dim_float(270, "ones");

	for (int a = 1; a < 65; a++)
	{
	  
	    D[a]=D[a+5]+E[a][a];
	  
	    A[a]=A[a+1]-0.376*D[a]/C[a][a][a]+E[a][a];
	  
	    A[a]=E[a][a];
	}

    return 0;
}