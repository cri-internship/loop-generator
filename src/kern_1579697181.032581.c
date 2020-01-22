#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(160, 320, "random");
	float *B = create_one_dim_float(710, "random");

	for (int c = 5; c < 316; c++)
	  for (int b = 4; b < 158; b++)
	    for (int a = 4; a < 158; a++)
	    {
	      
	      A[a][b]=A[a][b-3]-B[a];
	      
	      A[a][b]=A[a-4][b-5]/B[a];
	      
	      A[a][b]=A[a+2][b+2]-0.635;
	      
	      B[a]=B[a+5]-0.767;
	      
	      A[a][b]=A[a+1][b+3]-B[a];
	      
	      B[a]=A[a][b]-B[a];
	      A[a][b]=A[a][b+4]/0.863;
	    }

    return 0;
}