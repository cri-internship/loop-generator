#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(210, 860, "ones");
	double ***B = create_three_dim_double(270, 10, 580, "ones");
	double ***C = create_three_dim_double(220, 420, 940, "ones");

	for (int a = 5; a < 270; a++)
	{
	  
	    B[a][a][a]=B[a-3][a-5][a-5]*A[a][a];
	  
	    C[a][a][a]=B[a][a][a]*C[a][a][a]-0.774;
	    A[a][a]=B[a-1][a-2][a-3]*0.266;
	}

    return 0;
}