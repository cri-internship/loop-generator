#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(870, 830, "ones");
	double **A = create_two_dim_double(180, 120, "ones");

	for (int b = 2; b < 120; b++)
	  for (int a = 1; a < 180; a++)
	  {
	    
	     B[a][b]=A[a][b];
	     B[a-1][b]=A[a][b];
	    
	     double var_a=A[a][b]+0.816;
	     double var_b=A[a-1][b-2]/0.09;
	  }

    return 0;
}