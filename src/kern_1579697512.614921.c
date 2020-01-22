#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(280, 680, "ones");
	double *E = create_one_dim_double(160, "ones");
	double *D = create_one_dim_double(810, "ones");
	double *C = create_one_dim_double(790, "ones");
	double ***B = create_three_dim_double(210, 360, 510, "ones");

	for (int a = 5; a < 790; a++)
	{
	  
	    C[a]=C[a-2]+0.367;
	  
	    D[a]=0.471;
	    D[a-5]=0.231;
	}

    return 0;
}