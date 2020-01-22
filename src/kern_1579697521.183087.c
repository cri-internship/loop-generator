#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(480, "zeros");
	float **B = create_two_dim_float(760, 520, "zeros");
	float **C = create_two_dim_float(200, 100, "zeros");

	for (int d = 3; d < 100; d++)
	  for (int c = 4; c < 200; c++)
	    for (int b = 4; b < 200; b++)
	      for (int a = 4; a < 200; a++)
	      {
	        
	       C[a][b]=C[a-1][b-2]/A[a]+B[a][b];
	        
	       C[a][b]=C[a][b-1]/0.726;
	        
	       A[a]=A[a-4]/0.789;
	        
	       C[a][b]=C[a-2][b-3]-0.669;
	        
	       C[a][b]=0.035;
	      }

    return 0;
}