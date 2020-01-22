#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(620, 100, "ones");
	float *C = create_one_dim_float(260, "ones");
	float *A = create_one_dim_float(1000, "ones");

	for (int d = 5; d < 260; d++)
	  for (int c = 5; c < 260; c++)
	    for (int b = 5; b < 260; b++)
	      for (int a = 5; a < 260; a++)
	      {
	        
	       C[a]=0.128;
	       C[a-4]=0.279;
	        
	       B[a][b]=A[a]-B[a][b];
	       C[a]=A[a-5]+C[a];
	      }

    return 0;
}