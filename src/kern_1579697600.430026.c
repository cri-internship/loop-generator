#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(880, 620, "zeros");
	double ***D = create_three_dim_double(540, 660, 400, "zeros");
	double ***A = create_three_dim_double(60, 90, 550, "zeros");
	double *B = create_one_dim_double(850, "zeros");

	for (int a = 0; a < 535; a++)
	{
	  
	    D[a][a][a]=D[a+5][a+1][a+5]-A[a][a][a];
	}

    return 0;
}