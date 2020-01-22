#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(980, 370, "zeros");
	double *A = create_one_dim_double(330, "zeros");
	double **B = create_two_dim_double(790, 210, "zeros");

	for (int c = 0; c < 207; c++)
	  for (int b = 4; b < 330; b++)
	    for (int a = 4; a < 330; a++)
	    {
	      
	      A[a]=A[a-3]+0.395;
	      
	      B[a][b]=B[a][b+3]*0.515;
	      
	      C[a][b]=C[a+2][b+5]/0.197;
	      
	      double var_a=A[a]+0.282;
	      double var_b=A[a-4]-0.041;
	    }

    return 0;
}