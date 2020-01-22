#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(530, 270, "ones");
	float *A = create_one_dim_float(910, "ones");
	float **D = create_two_dim_float(910, 70, "ones");
	float ***C = create_three_dim_float(300, 30, 490, "ones");

	for (int d = 0; d < 487; d++)
	  for (int c = 0; c < 28; c++)
	    for (int b = 0; b < 300; b++)
	      for (int a = 0; a < 300; a++)
	      {
	        
	       B[a][b]=B[a+2][b+2]*D[a][b]-A[a];
	        
	       C[a][b][c]=C[a][b+2][c+3]*0.46;
	      }

    return 0;
}