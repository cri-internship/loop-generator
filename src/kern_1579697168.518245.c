#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(690, 950, "ones");
	double **C = create_two_dim_double(380, 570, "ones");
	double *B = create_one_dim_double(950, "ones");

	for (int c = 4; c < 567; c++)
	  for (int b = 5; b < 376; b++)
	    for (int a = 5; a < 376; a++)
	    {
	      
	      A[a][b]=A[a-5][b-4]-0.775;
	      
	      B[a]=B[a+4]/A[a][b];
	      
	      B[a]=B[a+5]/0.607;
	      
	      C[a][b]=C[a+4][b+3]+0.521;
	      
	      A[a][b]=A[a+2][b+5]*B[a]+C[a][b];
	      
	      double var_a=C[a][b]-0.945;
	      double var_b=C[a][b+3]/0.814;
	    }

    return 0;
}