#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(750, 240, "ones");
	double **A = create_two_dim_double(210, 370, "ones");
	double *C = create_one_dim_double(440, "ones");

	for (int c = 4; c < 237; c++)
	  for (int b = 1; b < 205; b++)
	    for (int a = 1; a < 205; a++)
	    {
	      
	      B[a][b]=B[a+2][b+3]-C[a];
	      
	      A[a][b]=0.907;
	      A[a+5][b+1]=C[a];
	      
	      B[a][b]=0.96;
	      
	      C[a]=0.485;
	      C[a-1]=A[a][b];
	      
	      double var_a=B[a][b]/0.567;
	      double var_b=B[a-1][b-4]+0.065;
	    }

    return 0;
}