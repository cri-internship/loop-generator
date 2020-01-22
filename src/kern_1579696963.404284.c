#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **D = create_two_dim_double(220, 480, "ones");
	double **B = create_two_dim_double(890, 810, "ones");
	double **A = create_two_dim_double(940, 220, "ones");
	double *C = create_one_dim_double(650, "ones");

	for (int a = 0; a < 648; a++)
	{
	  
	    C[a]=C[a+1]-0.094;
	  
	    C[a]=0.58*B[a][a]+D[a][a];
	}

    return 0;
}