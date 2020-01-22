#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(670, 20, 470, "random");
	double *D = create_one_dim_double(560, "random");
	double ***C = create_three_dim_double(610, 10, 10, "random");
	double *B = create_one_dim_double(450, "random");

	for (int a = 5; a < 670; a++)
	{
	  
	    A[a][a][a]=0.982-D[a];
	    A[a-3][a][a-5]=B[a]+0.375;
	}

    return 0;
}