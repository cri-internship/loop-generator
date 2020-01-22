#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **D = create_two_dim_double(940, 70, "zeros");
	double **C = create_two_dim_double(320, 100, "zeros");
	double *A = create_one_dim_double(680, "zeros");
	double **B = create_two_dim_double(990, 420, "zeros");

	for (int a = 0; a < 937; a++)
	{
	  
	    D[a][a]=0.028;
	    D[a][a+3]=0.136;
	}

    return 0;
}