#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(80, 470, "zeros");
	double ***C = create_three_dim_double(960, 770, 880, "zeros");
	double *B = create_one_dim_double(430, "zeros");
	double *D = create_one_dim_double(580, "zeros");

	for (int a = 4; a < 580; a++)
	{
	  
	    D[a]=C[a][a][a];
	    D[a-4]=0.678;
	}

    return 0;
}