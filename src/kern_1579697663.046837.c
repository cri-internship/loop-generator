#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(470, 140, "zeros");
	float *C = create_one_dim_float(60, "zeros");
	float **A = create_two_dim_float(270, 840, "zeros");
	float **D = create_two_dim_float(900, 690, "zeros");

	for (int d = 4; d < 137; d++)
	  for (int c = 5; c < 466; c++)
	    for (int b = 5; b < 466; b++)
	      for (int a = 5; a < 466; a++)
	      {
	        
	       B[a][b]=B[a-5][b-4]*0.973;
	        
	       B[a][b]=B[a+4][b+3]*D[a][b]/A[a][b]-C[a];
	      }

    return 0;
}