#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(540, 300, "zeros");
	float *B = create_one_dim_float(620, "zeros");

	for (int b = 0; b < 300; b++)
	  for (int a = 0; a < 536; a++)
	  {
	    
	     B[a]=B[a+4]+0.201;
	    
	     B[a]=A[a][b];
	    
	     A[a][b]=A[a][b]-0.02;
	     B[a]=A[a+4][b]+0.874;
	  }

    return 0;
}