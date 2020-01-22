#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(270, 150, 980, "ones");
	double **D = create_two_dim_double(830, 810, "ones");
	double **A = create_two_dim_double(560, 440, "ones");
	double **B = create_two_dim_double(910, 620, "ones");

	for (int a = 3; a < 268; a++)
	{
	  
	    A[a][a]=A[a-3][a]*D[a][a];
	  
	    C[a][a][a]=C[a+2][a][a+2]*A[a][a]-B[a][a];
	}

    return 0;
}