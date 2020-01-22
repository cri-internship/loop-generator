#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(710, 390, 770, "zeros");
	double **A = create_two_dim_double(790, 210, "zeros");
	double *D = create_one_dim_double(470, "zeros");
	double ***B = create_three_dim_double(110, 470, 10, "zeros");

	for (int a = 5; a < 710; a++)
	{
	  
	    A[a][a]=A[a][a+4]*0.329;
	  
	    C[a][a][a]=0.748;
	    C[a-5][a][a]=0.024;
	}

    return 0;
}