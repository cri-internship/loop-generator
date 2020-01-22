#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(770, "ones");
	double *B = create_one_dim_double(110, "ones");
	double ***C = create_three_dim_double(640, 170, 340, "ones");
	double ***D = create_three_dim_double(270, 490, 220, "ones");

	for (int d = 2; d < 340; d++)
	  for (int c = 2; c < 170; c++)
	    for (int b = 4; b < 110; b++)
	      for (int a = 4; a < 110; a++)
	      {
	        
	       C[a][b][c]=C[a-1][b-2][c-2]/B[a]-A[a];
	        
	       B[a]=B[a-4]*0.937;
	        
	       A[a]=A[a+2]+0.47;
	      }

    return 0;
}