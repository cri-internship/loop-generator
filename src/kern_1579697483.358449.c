#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(380, 450, "ones");
	float *B = create_one_dim_float(680, "ones");
	float **A = create_two_dim_float(700, 700, "ones");

	for (int d = 4; d < 450; d++)
	  for (int c = 5; c < 380; c++)
	    for (int b = 5; b < 380; b++)
	      for (int a = 5; a < 380; a++)
	      {
	        
	       C[a][b]=C[a-5][b-3]+0.485;
	        
	       B[a]=C[a][b]/A[a][b]+B[a];
	       A[a][b]=C[a-5][b-4]+B[a]-A[a][b];
	      }

    return 0;
}