#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(520, 40, 810, "random");
	int ***C = create_three_dim_int(780, 140, 940, "random");
	int **A = create_two_dim_int(320, 760, "random");

	for (int a = 0; a < 515; a++)
	{
	  
	    B[a][a][a]=B[a+2][a+5][a+4]/A[a][a]*C[a][a][a];
	  
	    B[a][a][a]=B[a+2][a+1][a+1]/C[a][a][a]-A[a][a];
	}

    return 0;
}