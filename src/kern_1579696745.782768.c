#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(520, 270, 670, "random");
	double *A = create_one_dim_double(110, "random");
	double **B = create_two_dim_double(620, 670, "random");

	for (int a = 0; a < 616; a++)
	{
	  
	    B[a][a]=B[a+4][a+3]-C[a][a][a]*A[a];
	}

    return 0;
}