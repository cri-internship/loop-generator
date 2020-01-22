#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(510, 400, "ones");
	float *C = create_one_dim_float(30, "ones");
	float **A = create_two_dim_float(700, 620, "ones");
	float *D = create_one_dim_float(760, "ones");

	for (int d = 3; d < 395; d++)
	  for (int c = 3; c < 27; c++)
	    for (int b = 3; b < 27; b++)
	      for (int a = 3; a < 27; a++)
	      {
	        
	       B[a][b]=B[a-3][b-3]*0.209+A[a][b]/C[a];
	        
	       A[a][b]=A[a+2][b]/B[a][b];
	        
	       B[a][b]=0.592;
	        
	       C[a]=0.686;
	       C[a+3]=0.621;
	      }

    return 0;
}