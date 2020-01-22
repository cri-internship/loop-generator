#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(410, "random");
	float *A = create_one_dim_float(890, "random");
	float **B = create_two_dim_float(250, 260, "random");
	float **D = create_two_dim_float(870, 110, "random");

	for (int b = 4; b < 257; b++)
	  for (int a = 4; a < 246; a++)
	  {
	    
	     B[a][b]=B[a-3][b-4]-0.616;
	    
	     B[a][b]=0.067;
	    
	     C[a]=0.325;
	     C[a-4]=0.326;
	    
	     B[a][b]=B[a][b]-D[a][b]/C[a]*A[a];
	     D[a][b]=B[a+4][b+3]/C[a];
	  }

    return 0;
}