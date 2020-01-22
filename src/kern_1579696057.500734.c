#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(360, 930, 20, "zeros");
	double **A = create_two_dim_double(700, 960, "zeros");
	double *B = create_one_dim_double(140, "zeros");
	double ***D = create_three_dim_double(280, 580, 860, "zeros");

	for (int b = 4; b < 955; b++)
	  for (int a = 5; a < 140; a++)
	  {
	    
	     A[a][b]=0.21;
	     A[a-5][b-4]=0.412;
	    
	     double var_a=B[a]+0.11;
	     double var_b=B[a-4]-0.99;
	    
	     B[a]=A[a][b]/D[a][b][a]*0.696;
	     C[a][b][a]=A[a+2][b+5]-B[a]/D[a][b][a];
	  }

    return 0;
}