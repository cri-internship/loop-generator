#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **D = create_two_dim_float(140, 920, "random");
	float *A = create_one_dim_float(710, "random");
	float **B = create_two_dim_float(320, 740, "random");
	float *C = create_one_dim_float(580, "random");

	for (int d = 1; d < 580; d++)
	  for (int c = 1; c < 580; c++)
	    for (int b = 1; b < 580; b++)
	      for (int a = 1; a < 580; a++)
	      {
	        
	       A[a]=A[a-1]+C[a]-D[a][b]/B[a][b];
	        
	       C[a]=C[a]+A[a]*D[a][b];
	       D[a][b]=C[a]*0.31;
	      }

    return 0;
}