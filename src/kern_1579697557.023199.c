#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(200, 670, "ones");
	double *A = create_one_dim_double(620, "ones");
	double ***B = create_three_dim_double(410, 170, 70, "ones");

	for (int a = 0; a < 405; a++)
	{
	  
	    B[a][a][a]=B[a+4][a+4][a+5]/C[a][a];
	  
	    B[a][a][a]=0.464;
	}

    return 0;
}