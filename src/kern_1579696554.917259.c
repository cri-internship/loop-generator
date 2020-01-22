#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(650, "random");
	float **A = create_two_dim_float(500, 480, "random");

	for (int d = 0; d < 479; d++)
	  for (int c = 0; c < 495; c++)
	    for (int b = 0; b < 495; b++)
	      for (int a = 0; a < 495; a++)
	      {
	        
	       B[a]=A[a][b]+0.3;
	       A[a][b]=A[a+5][b+1]+B[a];
	      }

    return 0;
}