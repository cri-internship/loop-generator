#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(770, 560, "zeros");
	double **B = create_two_dim_double(510, 800, "zeros");
	double *C = create_one_dim_double(780, "zeros");

	for (int b = 3; b < 798; b++)
	  for (int a = 3; a < 506; a++)
	  {
	    
	     B[a][b]=0.252;
	     float  var_a=B[a][b]+0.771;
	    
	     B[a][b]=B[a+1][b+2]+C[a];
	    
	     double var_b=B[a][b]*0.666;
	     double var_c=B[a-3][b-3]/0.588;
	    
	     double var_d=B[a][b]*0.663;
	     double var_e=B[a+4][b+2]-0.539;
	  }

    return 0;
}