#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(140, 210, "zeros");
	double ***A = create_three_dim_double(990, 880, 790, "zeros");
	double **B = create_two_dim_double(730, 430, "zeros");

	for (int b = 0; b < 425; b++)
	  for (int a = 4; a < 727; a++)
	  {
	    
	     B[a][b]=B[a-4][b]/0.766;
	    
	     B[a][b]=B[a+1][b+5]-C[a][b]/A[a][b][a];
	    
	     A[a][b][a]=A[a+5][b+5][a+2]-0.172;
	    
	     double var_a=B[a][b]+0.455;
	     double var_b=B[a+3][b+1]/0.045;
	  }

    return 0;
}