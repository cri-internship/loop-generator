#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(830, "ones");
	float **A = create_two_dim_float(340, 160, "ones");
	float **B = create_two_dim_float(960, 250, "ones");
	float *D = create_one_dim_float(230, "ones");

	for (int d = 4; d < 160; d++)
	  for (int c = 5; c < 230; c++)
	    for (int b = 5; b < 230; b++)
	      for (int a = 5; a < 230; a++)
	      {
	        
	       B[a][b]=B[a-3][b-4]*A[a][b];
	        
	       A[a][b]=A[a-5][b-1]+0.977;
	        
	       D[a]=D[a-3]/0.754;
	        
	       B[a][b]=B[a-2][b-3]*C[a]+D[a];
	        
	       D[a]=A[a][b]*C[a];
	        
	       B[a][b]=D[a]*B[a][b]-A[a][b]/C[a];
	       C[a]=D[a-2]-B[a][b]*C[a]/A[a][b];
	      }

    return 0;
}