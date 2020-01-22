#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(800, "random");
	double **A = create_two_dim_double(640, 990, "random");
	double **C = create_two_dim_double(970, 510, "random");

	for (int a = 0; a < 636; a++)
	{
	  
	    A[a][a]=0.789;
	    A[a][a+4]=0.65;
	  
	    C[a][a]=0.056;
	    C[a+5][a+4]=0.991;
	}

    return 0;
}