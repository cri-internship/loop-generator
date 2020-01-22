#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(170, 570, 480, "ones");
	double ***C = create_three_dim_double(50, 800, 750, "ones");
	double **B = create_two_dim_double(40, 130, "ones");
	double *D = create_one_dim_double(230, "ones");

	for (int a = 0; a < 35; a++)
	{
	  
	    B[a][a]=B[a+5][a+1]-C[a][a][a]*A[a][a][a];
	}

    return 0;
}