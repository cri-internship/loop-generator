#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(970, 800, "ones");
	float **A = create_two_dim_float(280, 620, "ones");
	float *B = create_one_dim_float(830, "ones");
	float **D = create_two_dim_float(330, 710, "ones");

	for (int d = 1; d < 620; d++)
	  for (int c = 5; c < 278; c++)
	    for (int b = 5; b < 278; b++)
	      for (int a = 5; a < 278; a++)
	      {
	        
	       B[a]=B[a+1]/0.608;
	        
	       A[a][b]=A[a+2][b]-B[a]*C[a][b]/D[a][b];
	        
	       D[a][b]=A[a][b]/B[a]+C[a][b];
	       D[a-5][b-1]=C[a][b]-A[a][b];
	        
	       B[a]=D[a][b]*C[a][b];
	      }

    return 0;
}