#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(160, 830, "random");
	double *A = create_one_dim_double(710, "random");
	double **D = create_two_dim_double(870, 390, "random");
	double *B = create_one_dim_double(300, "random");

	for (int a = 5; a < 156; a++)
	{
	  
	    D[a][a]=D[a-5][a]-B[a]/C[a][a];
	  
	    C[a][a]=C[a][a+4]/0.228;
	}

    return 0;
}