#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(620, "random");
	float **A = create_two_dim_float(150, 140, "random");
	float ***C = create_three_dim_float(710, 850, 670, "random");

	for (int d = 0; d < 140; d++)
	  for (int c = 2; c < 150; c++)
	    for (int b = 2; b < 150; b++)
	      for (int a = 2; a < 150; a++)
	      {
	        
	       B[a]=0.117;
	       C[a][b][c]=B[a]/A[a][b]+C[a][b][c];
	        
	       A[a][b]=A[a-2][b]+0.227;
	      }

    return 0;
}