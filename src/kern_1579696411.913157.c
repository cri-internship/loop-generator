#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *D = create_one_dim_double(510, "zeros");
	double ***B = create_three_dim_double(40, 880, 340, "zeros");
	double **C = create_two_dim_double(950, 170, "zeros");
	double *A = create_one_dim_double(80, "zeros");

	for (int a = 4; a < 950; a++)
	{
	  
	    C[a][a]=0.26;
	    C[a-2][a-4]=0.562;
	}

    return 0;
}