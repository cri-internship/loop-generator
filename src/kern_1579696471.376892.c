#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(200, "random");
	double *B = create_one_dim_double(620, "random");
	double **A = create_two_dim_double(950, 710, "random");

	for (int c = 0; c < 709; c++)
	  for (int b = 0; b < 616; b++)
	    for (int a = 0; a < 616; a++)
	    {
	      
	      A[a][b]=A[a+1][b+1]+B[a];
	      
	      B[a]=B[a]+A[a][b];
	      C[a]=B[a+4]*C[a];
	    }

    return 0;
}