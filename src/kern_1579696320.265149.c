#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(140, 960, 180, "zeros");
	double **A = create_two_dim_double(570, 310, "zeros");
	double **D = create_two_dim_double(790, 90, "zeros");
	double *C = create_one_dim_double(760, "zeros");

	for (int a = 0; a < 760; a++)
	{
	  
	    C[a]=0.856;
	    C[a]=0.548;
	  
	    D[a][a]=0.553;
	    D[a][a]=0.951;
	}

    return 0;
}