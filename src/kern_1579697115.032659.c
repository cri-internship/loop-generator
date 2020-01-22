#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(730, 930, 780, "zeros");
	double **C = create_two_dim_double(670, 100, "zeros");
	double **A = create_two_dim_double(290, 590, "zeros");

	for (int a = 0; a < 725; a++)
	{
	  
	    B[a][a][a]=B[a+2][a+1][a+5]-C[a][a]+A[a][a];
	}

    return 0;
}