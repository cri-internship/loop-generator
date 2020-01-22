#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(980, "ones");
	float ***A = create_three_dim_float(770, 930, 870, "ones");
	float **C = create_two_dim_float(10, 120, "ones");
	float **D = create_two_dim_float(410, 900, "ones");

	for (int b = 4; b < 115; b++)
	  for (int a = 3; a < 5; a++)
	  {
	    
	     D[a][b]=D[a-3][b-2]*C[a][b]/A[a][b][a]-B[a];
	    
	     D[a][b]=D[a+1][b+3]*0.211;
	    
	     C[a][b]=0.829;
	     C[a-1][b-4]=0.145;
	    
	     float var_a=C[a][b]/0.514;
	     float var_b=C[a+5][b+5]-0.49;
	  }

    return 0;
}