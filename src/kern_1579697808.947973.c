#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(930, "random");
	double **B = create_two_dim_double(900, 420, "random");

	for (int c = 2; c < 420; c++)
	  for (int b = 2; b < 900; b++)
	    for (int a = 2; a < 900; a++)
	    {
	      
	      A[a]=A[a-2]*0.214;
	      
	      A[a]=A[a+1]+B[a][b];
	      
	      A[a]=B[a][b];
	      
	      double var_a=B[a][b]/0.797;
	      double var_b=B[a-2][b-2]*0.861;
	    }

    return 0;
}