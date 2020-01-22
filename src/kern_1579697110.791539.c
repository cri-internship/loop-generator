#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *D = create_one_dim_double(460, "random");
	double *A = create_one_dim_double(710, "random");
	double **C = create_two_dim_double(160, 400, "random");
	double *B = create_one_dim_double(210, "random");

	for (int c = 0; c < 460; c++)
	  for (int b = 0; b < 460; b++)
	    for (int a = 0; a < 460; a++)
	    {
	      
	      D[a]=C[a][b];
	      D[a]=A[a]-B[a];
	    }

    return 0;
}