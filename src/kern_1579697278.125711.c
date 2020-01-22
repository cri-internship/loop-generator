#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(240, "random");
	double ***A = create_three_dim_double(40, 10, 490, "random");
	double ***B = create_three_dim_double(340, 140, 340, "random");

	for (int a = 5; a < 35; a++)
	{
	  
	    B[a][a][a]=B[a-1][a-1][a-3]+A[a][a][a]-C[a];
	  
	    A[a][a][a]=A[a-4][a-5][a-4]+B[a][a][a];
	  
	    A[a][a][a]=A[a+4][a+4][a+5]+0.632;
	  
	    B[a][a][a]=B[a][a+4][a+2]*0.025;
	}

    return 0;
}