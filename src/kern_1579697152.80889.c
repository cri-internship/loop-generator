#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(500, 220, "random");
	float *A = create_one_dim_float(900, "random");

	for (int d = 0; d < 216; d++)
	  for (int c = 4; c < 495; c++)
	    for (int b = 4; b < 495; b++)
	      for (int a = 4; a < 495; a++)
	      {
	        
	       A[a]=A[a]*0.471;
	       A[a]=B[a][b];
	        
	       B[a][b]=B[a+5][b+2]+0.917;
	        
	       B[a][b]=B[a+1][b+4]/0.431;
	        
	       B[a][b]=A[a]-B[a][b];
	       B[a][b]=A[a-4]*B[a][b];
	      }

    return 0;
}