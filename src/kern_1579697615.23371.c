#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(810, 860, "ones");
	double *A = create_one_dim_double(350, "ones");

	for (int b = 1; b < 860; b++)
	  for (int a = 4; a < 349; a++)
	  {
	    
	     B[a][b]=B[a-4][b-1]*A[a];
	    
	     A[a]=A[a+1]*0.292;
	    
	     double var_a=A[a]/0.885;
	     double var_b=A[a-2]-0.624;
	    
	     A[a]=A[a]/B[a][b];
	  }

    return 0;
}