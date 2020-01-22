#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(900, 930, 150, "ones");
	double *B = create_one_dim_double(800, "ones");
	double *C = create_one_dim_double(860, "ones");

	for (int b = 3; b < 930; b++)
	  for (int a = 5; a < 800; a++)
	  {
	    
	     C[a]=C[a-1]/A[a][b][a];
	    
	     A[a][b][a]=B[a]+C[a];
	     A[a-2][b-3][a]=B[a];
	    
	     C[a]=0.579;
	    
	     double var_a=B[a]-0.741;
	     double var_b=B[a-5]/0.547;
	    
	     double var_c=B[a]/0.103;
	     double var_d=B[a-4]+0.432;
	  }

    return 0;
}