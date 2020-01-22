#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(430, "ones");
	float ***A = create_three_dim_float(420, 260, 500, "ones");
	float *C = create_one_dim_float(380, "ones");
	float **D = create_two_dim_float(540, 600, "ones");

	for (int d = 2; d < 600; d++)
	  for (int c = 5; c < 425; c++)
	    for (int b = 5; b < 425; b++)
	      for (int a = 5; a < 425; a++)
	      {
	        
	       B[a]=B[a-5]+0.942;
	        
	       B[a]=B[a-3]+0.739;
	        
	       D[a][b]=0.56;
	       D[a-3][b]=0.683;
	        
	       D[a][b]=0.191;
	        
	       float var_a=B[a]*0.991;
	      }

    return 0;
}