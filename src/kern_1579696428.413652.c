#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(750, 910, "zeros");
	float **C = create_two_dim_float(530, 60, "zeros");
	float *A = create_one_dim_float(380, "zeros");
	float **D = create_two_dim_float(180, 140, "zeros");

	for (int b = 0; b < 59; b++)
	  for (int a = 1; a < 180; a++)
	  {
	    
	     C[a][b]=C[a+2][b+1]-0.166;
	    
	     D[a][b]=0.981;
	     D[a-1][b]=0.128;
	  }

    return 0;
}