#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(190, 710, "ones");
	float **E = create_two_dim_float(930, 370, "ones");
	float ***D = create_three_dim_float(120, 1000, 990, "ones");
	float ***C = create_three_dim_float(500, 730, 420, "ones");
	float *B = create_one_dim_float(150, "ones");

	for (int a = 0; a < 115; a++)
	{
	  
	    D[a][a][a]=D[a+3][a+5][a+4]*0.626;
	  
	    A[a][a]=A[a+4][a+1]/0.593;
	  
	    D[a][a][a]=D[a+3][a+4][a+2]-A[a][a]+C[a][a][a]/B[a]*E[a][a];
	  
	    D[a][a][a]=C[a][a][a]/0.604*D[a][a][a]-B[a];
	    C[a][a][a]=C[a+3][a+5][a+4]/0.532;
	}

    return 0;
}