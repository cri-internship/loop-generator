#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(530, "ones");
	float *D = create_one_dim_float(240, "ones");
	float **C = create_two_dim_float(860, 330, "ones");
	float **A = create_two_dim_float(230, 90, "ones");

	for (int d = 3; d < 328; d++)
	  for (int c = 5; c < 238; c++)
	    for (int b = 5; b < 238; b++)
	      for (int a = 5; a < 238; a++)
	      {
	        
	       B[a]=B[a-3]*D[a]-A[a][b]/C[a][b];
	        
	       D[a]=D[a+2]/B[a]+A[a][b];
	        
	       C[a][b]=D[a];
	       C[a+5][b+2]=B[a];
	        
	       D[a]=A[a][b]/C[a][b]-B[a];
	        
	       D[a]=C[a][b]+A[a][b]-0.685/B[a];
	       B[a]=C[a-5][b-3]*A[a][b];
	      }

    return 0;
}