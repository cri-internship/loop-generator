#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *E = create_one_dim_float(880, "zeros");
	float ***C = create_three_dim_float(670, 580, 130, "zeros");
	float **D = create_two_dim_float(710, 710, "zeros");
	float ***B = create_three_dim_float(840, 890, 670, "zeros");
	float **A = create_two_dim_float(310, 290, "zeros");

	for (int a = 5; a < 670; a++)
	{
	  
	    C[a][a][a]=D[a][a]-B[a][a][a];
	    C[a-2][a-5][a]=0.822;
	}

    return 0;
}