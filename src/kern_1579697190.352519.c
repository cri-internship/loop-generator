#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(630, 100, "random");
	double *C = create_one_dim_double(980, "random");
	double *A = create_one_dim_double(60, "random");

	for (int c = 4; c < 100; c++)
	  for (int b = 4; b < 60; b++)
	    for (int a = 4; a < 60; a++)
	    {
	      
	      A[a]=A[a-4]/0.788;
	      
	      A[a]=A[a-2]/0.443;
	      
	      C[a]=B[a][b]-A[a];
	      A[a]=B[a+1][b]-C[a];
	      
	      B[a][b]=B[a][b]+A[a];
	      B[a][b]=B[a-2][b-4]*C[a]/A[a];
	    }

    return 0;
}