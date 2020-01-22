#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(590, 650, 940, "ones");
	float *C = create_one_dim_float(980, "ones");
	float *D = create_one_dim_float(240, "ones");
	float *A = create_one_dim_float(310, "ones");

	for (int d = 3; d < 239; d++)
	  for (int c = 3; c < 239; c++)
	    for (int b = 3; b < 239; b++)
	      for (int a = 3; a < 239; a++)
	      {
	        
	       A[a]=A[a-3]+0.414;
	        
	       D[a]=D[a+1]+B[a][b][c]/A[a]*C[a];
	        
	       A[a]=0.003;
	        
	       float var_a=D[a]+0.967;
	      }

    return 0;
}