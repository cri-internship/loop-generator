#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(590, "random");
	double *C = create_one_dim_double(320, "random");
	double **B = create_two_dim_double(470, 690, "random");
	double *D = create_one_dim_double(310, "random");

	for (int c = 0; c < 689; c++)
	  for (int b = 4; b < 318; b++)
	    for (int a = 4; a < 318; a++)
	    {
	      
	      C[a]=C[a-4]+0.445;
	      
	      C[a]=A[a];
	      
	      C[a]=B[a][b]/C[a]*C[a]+A[a];
	      A[a]=B[a][b+1]*D[a]/C[a];
	    }

    return 0;
}