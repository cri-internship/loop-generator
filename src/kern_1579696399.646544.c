#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(490, "ones");
	double **A = create_two_dim_double(140, 90, "ones");

	for (int b = 3; b < 90; b++)
	  for (int a = 4; a < 140; a++)
	  {
	    
	     A[a][b]=0.727;
	     A[a-1][b-3]=0.021;
	    
	     double var_a=A[a][b]-0.537;
	     double var_b=A[a-4][b]+0.958;
	  }

    return 0;
}