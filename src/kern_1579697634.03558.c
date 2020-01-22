#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(590, 490, "zeros");

	for (int c = 0; c < 487; c++)
	  for (int b = 3; b < 589; b++)
	    for (int a = 3; a < 589; a++)
	    {
	      
	      A[a][b]=0.277;
	      A[a+1][b]=0.829;
	      
	      double var_a=A[a][b]*0.38;
	      double var_b=A[a][b+3]*0.609;
	      
	      double var_c=A[a][b]+0.291;
	      double var_d=A[a-3][b]-0.081;
	    }

    return 0;
}