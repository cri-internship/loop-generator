#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(380, "random");
	double **D = create_two_dim_double(960, 570, "random");
	double **B = create_two_dim_double(940, 930, "random");
	double ***C = create_three_dim_double(90, 590, 180, "random");

	for (int c = 1; c < 180; c++)
	  for (int b = 4; b < 570; b++)
	    for (int a = 3; a < 90; a++)
	    {
	      
	      C[a][b][c]=C[a-2][b-2][c-1]-0.123;
	      
	      B[a][b]=B[a-2][b-4]*0.854;
	      
	      A[a]=A[a-1]*0.201;
	      
	      double var_a=D[a][b]+0.108;
	      double var_b=D[a-3][b]*0.715;
	    }

    return 0;
}