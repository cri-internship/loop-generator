#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(60, "ones");
	float *D = create_one_dim_float(540, "ones");
	float ***A = create_three_dim_float(590, 200, 350, "ones");
	float **B = create_two_dim_float(890, 130, "ones");

	for (int b = 0; b < 126; b++)
	  for (int a = 1; a < 56; a++)
	  {
	    
	     C[a]=C[a-1]-0.428;
	    
	     B[a][b]=B[a+1][b+1]*0.494;
	    
	     D[a]=D[a+5]*0.767;
	    
	     C[a]=A[a][b][a];
	    
	     float var_a=B[a][b]/0.515;
	     float var_b=B[a+3][b+4]/0.236;
	  }

    return 0;
}