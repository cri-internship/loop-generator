#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(250, 590, "random");
	double **B = create_two_dim_double(400, 180, "random");
	double ***A = create_three_dim_double(720, 170, 820, "random");

	for (int a = 3; a < 400; a++)
	{
	  
	    B[a][a]=B[a-2][a-3]*C[a][a]/A[a][a][a];
	  
	    B[a][a]=B[a-1][a-3]*0.74;
	}

    return 0;
}