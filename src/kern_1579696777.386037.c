#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(290, 960, 80, "ones");
	double *A = create_one_dim_double(160, "ones");
	double *C = create_one_dim_double(670, "ones");
	double **D = create_two_dim_double(140, 560, "ones");

	for (int b = 5; b < 555; b++)
	  for (int a = 4; a < 136; a++)
	  {
	    
	     D[a][b]=D[a-4][b-5]/A[a]*0.15;
	    
	     C[a]=C[a+2]*0.454;
	    
	     D[a][b]=D[a+4][b+5]/0.554;
	    
	     double var_a=B[a][b][a]-0.785;
	     double var_b=B[a][b-1][a-1]/0.6;
	  }

    return 0;
}