#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(860, 140, "zeros");
	double **B = create_two_dim_double(170, 140, "zeros");

	for (int c = 0; c < 136; c++)
	  for (int b = 0; b < 856; b++)
	    for (int a = 0; a < 856; a++)
	    {
	      
	      double var_a=A[a][b]+0.628;
	      double var_b=A[a+3][b+1]/0.407;
	      
	      double var_c=A[a][b]*0.132;
	      double var_d=A[a+4][b+4]-0.823;
	    }

    return 0;
}