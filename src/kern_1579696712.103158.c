#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *D = create_one_dim_float(750, "random");
	float *A = create_one_dim_float(40, "random");
	float *B = create_one_dim_float(420, "random");
	float *E = create_one_dim_float(680, "random");
	float **C = create_two_dim_float(780, 310, "random");

	for (int d = 0; d < 305; d++)
	  for (int c = 3; c < 416; c++)
	    for (int b = 3; b < 416; b++)
	      for (int a = 3; a < 416; a++)
	      {
	        
	       E[a]=E[a+3]/D[a]-C[a][b];
	        
	       B[a]=0.09;
	       B[a+4]=0.526;
	        
	       C[a][b]=C[a][b]-B[a]*A[a]+E[a];
	       E[a]=C[a+2][b+5]*B[a]-A[a]/E[a]+D[a];
	        
	       A[a]=E[a]/0.06*D[a]-B[a]+A[a];
	       D[a]=E[a-3]*B[a]+0.924;
	      }

    return 0;
}