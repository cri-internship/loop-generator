#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(250, 840, "ones");
	double *A = create_one_dim_double(410, "ones");

	for (int b = 5; b < 836; b++)
	  for (int a = 3; a < 245; a++)
	  {
	    
	     A[a]=A[a-3]/0.751;
	    
	     B[a][b]=B[a+5][b+4]/0.616;
	    
	     A[a]=A[a+4]*B[a][b];
	    
	     B[a][b]=A[a];
	    
	     double var_a=B[a][b]*0.504;
	     double var_b=B[a-1][b-5]/0.383;
	    
	     A[a]=A[a]-0.294;
	  }

    return 0;
}