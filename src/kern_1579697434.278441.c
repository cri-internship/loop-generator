#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(680, "zeros");
	float **B = create_two_dim_float(590, 400, "zeros");

	for (int b = 0; b < 400; b++)
	  for (int a = 3; a < 590; a++)
	  {
	    
	     A[a]=A[a-3]+0.968;
	    
	     B[a][b]=B[a-3][b]-0.485;
	  }

    return 0;
}