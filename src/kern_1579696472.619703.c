#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(70, 870, 170, "random");
	double *B = create_one_dim_double(790, "random");
	double **A = create_two_dim_double(790, 490, "random");

	for (int b = 3; b < 488; b++)
	  for (int a = 5; a < 66; a++)
	  {
	    
	     B[a]=A[a][b];
	     C[a][b][a]=B[a]-C[a][b][a];
	    
	     C[a][b][a]=C[a+3][b+1][a+4]-B[a]/B[a];
	    
	     A[a][b]=A[a+3][b+2]+0.203;
	    
	     A[a][b]=A[a+2][b+2]/0.263;
	    
	     double var_a=B[a]+0.941;
	     double var_b=B[a+5]/0.621;
	  }

    return 0;
}