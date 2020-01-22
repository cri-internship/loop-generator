#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(60, 760, "ones");
	float **B = create_two_dim_float(230, 210, "ones");
	float ***C = create_three_dim_float(550, 560, 910, "ones");

	for (int b = 4; b < 210; b++)
	  for (int a = 5; a < 226; a++)
	  {
	    
	     C[a][b][a]=C[a+2][b][a+1]-B[a][b]/A[a][b];
	    
	     B[a][b]=B[a+4][b]*0.131;
	    
	     C[a][b][a]=B[a][b];
	    
	     B[a][b]=C[a][b][a];
	    
	     float var_a=C[a][b][a]/0.032;
	     float var_b=C[a-1][b][a-1]+0.325;
	  }

    return 0;
}