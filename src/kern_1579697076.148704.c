#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **E = create_two_dim_double(830, 260, "ones");
	double ***D = create_three_dim_double(880, 910, 1000, "ones");
	double *B = create_one_dim_double(720, "ones");
	double *A = create_one_dim_double(510, "ones");
	double **C = create_two_dim_double(930, 710, "ones");

	for (int a = 0; a < 877; a++)
	{
	  
	    D[a][a][a]=D[a+3][a+1][a+3]+E[a][a];
	}

    return 0;
}