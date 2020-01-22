#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(410, 520, "ones");
	float **A = create_two_dim_float(160, 130, "ones");
	float ***D = create_three_dim_float(120, 570, 540, "ones");
	float ***C = create_three_dim_float(500, 130, 750, "ones");

	for (int b = 0; b < 518; b++)
	  for (int a = 0; a < 409; a++)
	  {
	    
	     B[a][b]=B[a+1][b+2]*D[a][b][a]-C[a][b][a]/A[a][b];
	  }

    return 0;
}