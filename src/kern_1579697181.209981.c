#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(80, "ones");
	double ***C = create_three_dim_double(830, 560, 870, "ones");
	double ***B = create_three_dim_double(250, 210, 560, "ones");
	double **D = create_two_dim_double(230, 460, "ones");

	for (int a = 5; a < 227; a++)
	{
	  
	    B[a][a][a]=B[a-4][a-4][a-5]+0.179;
	  
	    D[a][a]=D[a+3][a+1]*0.974-C[a][a][a];
	}

    return 0;
}