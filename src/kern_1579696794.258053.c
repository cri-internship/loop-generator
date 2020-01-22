#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(180, 660, 50, "zeros");
	double **A = create_two_dim_double(90, 190, "zeros");

	for (int a = 0; a < 87; a++)
	{
	  
	    A[a][a]=0.641;
	    A[a+1][a+3]=B[a][a][a];
	}

    return 0;
}