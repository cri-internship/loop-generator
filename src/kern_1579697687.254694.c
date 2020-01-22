#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(520, 680, "random");
	double ***E = create_three_dim_double(110, 240, 80, "random");
	double ***D = create_three_dim_double(910, 360, 920, "random");
	double **A = create_two_dim_double(100, 50, "random");
	double *C = create_one_dim_double(880, "random");

	for (int a = 5; a < 110; a++)
	{
	  
	    E[a][a][a]=E[a-1][a-2][a-5]-C[a]+D[a][a][a]/A[a][a];
	}

    return 0;
}