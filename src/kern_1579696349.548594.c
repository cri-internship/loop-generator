#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(160, 300, 950, "ones");
	double **A = create_two_dim_double(320, 370, "ones");
	double **B = create_two_dim_double(140, 190, "ones");
	double *D = create_one_dim_double(990, "ones");

	for (int b = 1; b < 190; b++)
	  for (int a = 5; a < 140; a++)
	  {
	    
	     C[a][b][a]=0.919*A[a][b]-D[a];
	     C[a+2][b][a+2]=D[a]-B[a][b];
	    
	     double var_a=B[a][b]-0.327;
	     double var_b=B[a-5][b-1]-0.451;
	  }

    return 0;
}