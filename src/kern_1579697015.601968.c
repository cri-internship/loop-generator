#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(200, 60, "ones");
	double ***B = create_three_dim_double(350, 360, 580, "ones");
	double ***C = create_three_dim_double(930, 650, 330, "ones");

	for (int a = 4; a < 347; a++)
	{
	  
	    B[a][a][a]=B[a-4][a-3][a-3]+A[a][a]-C[a][a][a];
	  
	    B[a][a][a]=B[a+2][a][a+3]/A[a][a];
	}

    return 0;
}