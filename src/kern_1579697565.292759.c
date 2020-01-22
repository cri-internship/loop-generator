#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **D = create_two_dim_float(560, 770, "random");
	float *C = create_one_dim_float(310, "random");
	float ***A = create_three_dim_float(240, 290, 920, "random");
	float **B = create_two_dim_float(630, 580, "random");

	for (int a = 4; a < 625; a++)
	{
	  
	    B[a][a]=C[a]/A[a][a][a]*D[a][a];
	    B[a-4][a-2]=A[a][a][a];
	  
	    B[a][a]=B[a][a]+A[a][a][a]/C[a];
	    D[a][a]=B[a+5][a+4]/A[a][a][a]-C[a]+D[a][a];
	}

    return 0;
}