#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(190, 430, 980, "zeros");
	float **D = create_two_dim_float(210, 840, "zeros");
	float **C = create_two_dim_float(460, 320, "zeros");
	float **B = create_two_dim_float(780, 440, "zeros");

	for (int d = 0; d < 440; d++)
	  for (int c = 0; c < 210; c++)
	    for (int b = 0; b < 210; b++)
	      for (int a = 0; a < 210; a++)
	      {
	        
	       D[a][b]=A[a][b][c]+B[a][b]/C[a][b];
	       D[a][b+3]=A[a][b][c]*C[a][b];
	        
	       float var_a=B[a][b]-0.21;
	      }

    return 0;
}