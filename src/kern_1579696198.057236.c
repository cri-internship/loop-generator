#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(570, "ones");
	float *A = create_one_dim_float(410, "ones");
	float **C = create_two_dim_float(410, 60, "ones");

	for (int b = 4; b < 58; b++)
	  for (int a = 5; a < 406; a++)
	  {
	    
	     C[a][b]=C[a-3][b-1]-A[a];
	    
	     C[a][b]=0.8;
	    
	     float var_a=C[a][b]/0.63;
	     float var_b=C[a+4][b+2]*0.768;
	  }

    return 0;
}