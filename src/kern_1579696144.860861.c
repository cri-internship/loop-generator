#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(650, 360, "ones");
	double **B = create_two_dim_double(420, 100, "ones");

	for (int c = 3; c < 100; c++)
	  for (int b = 3; b < 420; b++)
	    for (int a = 3; a < 420; a++)
	    {
	      
	      A[a][b]=B[a][b];
	      A[a][b+3]=0.319;
	      
	      double var_a=B[a][b]-0.413;
	      double var_b=B[a-3][b-3]/0.218;
	      
	      double var_c=B[a][b]*0.597;
	      double var_d=B[a-3][b-1]*0.243;
	    }

    return 0;
}