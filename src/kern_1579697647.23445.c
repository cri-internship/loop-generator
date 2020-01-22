#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *E = create_one_dim_double(520, "ones");
	double *B = create_one_dim_double(950, "ones");
	double *A = create_one_dim_double(80, "ones");
	double **C = create_two_dim_double(900, 540, "ones");
	double **D = create_two_dim_double(520, 350, "ones");

	for (int a = 3; a < 520; a++)
	{
	  
	    E[a]=0.386;
	    E[a-3]=0.85;
	}

    return 0;
}