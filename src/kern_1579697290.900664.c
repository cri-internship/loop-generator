#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(950, "ones");
	double ***B = create_three_dim_double(900, 930, 970, "ones");

	for (int b = 5; b < 926; b++)
	  for (int a = 5; a < 895; a++)
	  {
	    
	     A[a]=A[a-5]-B[a][b][a];
	    
	     B[a][b][a]=B[a-3][b-5][a-2]/0.672;
	    
	     B[a][b][a]=B[a+2][b+4][a+4]+A[a];
	    
	     B[a][b][a]=B[a+1][b+1][a+2]/A[a];
	    
	     double var_a=B[a][b][a]-0.557;
	     double var_b=B[a+5][b+4][a+3]/0.585;
	  }

    return 0;
}