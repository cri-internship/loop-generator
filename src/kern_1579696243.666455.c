#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(360, "random");
	float **B = create_two_dim_float(160, 760, "random");

	for (int d = 3; d < 757; d++)
	  for (int c = 0; c < 156; c++)
	    for (int b = 0; b < 156; b++)
	      for (int a = 0; a < 156; a++)
	      {
	        
	       B[a][b]=B[a+3][b+2]-A[a];
	        
	       B[a][b]=B[a+4][b+3]+A[a];
	      }

    return 0;
}