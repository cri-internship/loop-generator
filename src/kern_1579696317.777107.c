#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *D = create_one_dim_float(700, "zeros");
	float *B = create_one_dim_float(970, "zeros");
	float *A = create_one_dim_float(320, "zeros");
	float *C = create_one_dim_float(970, "zeros");

	for (int d = 5; d < 700; d++)
	  for (int c = 5; c < 700; c++)
	    for (int b = 5; b < 700; b++)
	      for (int a = 5; a < 700; a++)
	      {
	        
	       D[a]=D[a-4]+0.52;
	        
	       D[a]=0.595;
	        
	       C[a]=B[a];
	       C[a-3]=A[a];
	        
	       C[a]=B[a]/D[a];
	       D[a]=B[a-5]/C[a]+C[a]-A[a];
	      }

    return 0;
}