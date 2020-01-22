#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(990, 180, "ones");
	double *A = create_one_dim_double(760, "ones");
	double **B = create_two_dim_double(380, 660, "ones");

	for (int d = 3; d < 175; d++)
	  for (int c = 4; c < 380; c++)
	    for (int b = 4; b < 380; b++)
	      for (int a = 4; a < 380; a++)
	      {
	        
	       C[a][b]=C[a-1][b-3]/0.097;
	        
	       C[a][b]=C[a+2][b+5]-A[a];
	        
	       C[a][b]=C[a+1][b+5]+B[a][b]/A[a];
	        
	       B[a][b]=0.218;
	       B[a-4][b-2]=0.317;
	        
	       A[a]=0.475;
	       A[a+5]=0.062;
	        
	       A[a]=0.383;
	      }

    return 0;
}