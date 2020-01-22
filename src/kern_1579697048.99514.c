#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(750, "ones");
	double **B = create_two_dim_double(200, 250, "ones");

	for (int c = 0; c < 246; c++)
	  for (int b = 1; b < 195; b++)
	    for (int a = 1; a < 195; a++)
	    {
	      
	      B[a][b]=B[a][b]/A[a];
	      A[a]=B[a+5][b+4]+A[a];
	      
	      double var_a=A[a]+0.856;
	      double var_b=A[a-1]-0.664;
	      
	      A[a]=B[a][b]/0.842;
	      B[a][b]=B[a+2][b+1]+A[a];
	    }

    return 0;
}